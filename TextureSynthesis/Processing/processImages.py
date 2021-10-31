from pathlib import Path
import subprocess


INPUT_PATH  = "Raw"
OUTPUT_PATH = "Clean"


path = Path(INPUT_PATH)


for i, img_path in enumerate(path.glob(f"*.*")):

        output_path = Path(OUTPUT_PATH, f"{i:04d}.png" )

        opts = [ 
                "-type", "TrueColor",
                "-resize", "256x256^",
                "-gravity", "center",
                "-crop", "256x256+0+0",
                "-page", "256x256+0+0",
        ]

        args = ["convert"]
        args += [str(img_path.absolute())]
        args += opts
        args += [str(output_path.absolute())]
        

        print(args)
        print(" ".join(args))

        ret = subprocess.run(args)

        if ret.returncode == 0:
            print(output_path)
