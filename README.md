# Building interactive installations and applications with AI and OpenFrameworks

<!-- This workshop explores the challenges of using machine learning models for interactive installations, hardware projects and live experiments. We will examine the trade-offs between frameworks, languages and hardware and the specific challenges of connecting ML systems with generative graphics and user input. Finally we will see one example using sockets to communicate between a Tensorflow runtime and OpenFrameworks. -->


## Requirements


* [Blender](https://www.blender.org/)
* [Python 3.6–3.9](https://docs.python-guide.org/starting/installation/)
* [Tensorflow](https://www.tensorflow.org/install)
* [openFrameworks](https://openframeworks.cc/)
* [ofxZmgModelRunner](https://github.com/meredityman/ofxZmqModelRunner)
* [ofxZmq](https://github.com/meredityman/ofxZmq)

## Summary

| Time   | Topic                             | Links                |
|--------|-----------------------------------|------------------------------------|
| +00:00 | Introduction                      |                                    |
| +00:30 | --                                |                                    |
| +01:00 | Texture Synthesis                 |[Gihub](TextureSynthesis/Collab/Notebook_TextureSynthesis.ipynb)           |
| +01:30 | _--individual work--_             |                                    |
| +02:00 | Introduction to Blender           |                                    |
| +02:30 | Rendering PBR Textures            | [Gihub](TextureSynthesis/Blender)  |
| +03:00 | _--individual work--_             |                                    |
| +03:30 | Generating datasets with Blender  | [Gihub](GeneratingDatasets/Blender)|
| +04:00 | --                                |                                    |
| +04:30 | --                                |                                    |
| +05:00 | _--individual work--_             |                                    |
| +05:30 | _--individual work--_             |                                    |
| +06:00 | Training StyleGan with CG data    | [Gihub](GeneratingDatasets/Collab/Notebook_StyleGan2.ipynb) |
| +06:30 | _--individual work--_             |                                    |
| +07:00 | Intro to Depth Maps               |                                    |
| +07:30 | Intro to OpenFrameworks           | [Gihub](DepthMaps)                 |
| +08:00 | Generative Meshes                 |                                    |
| +08:30 | --                                |                                    |
| +09:00 | Shaders                           |                                    |
| +09:30 | --                                |                                    |
| +10:00 | _--individual work--_             |                                    |
| +10:30 | _--individual work--_             |                                    |
| +10:00 | Generating video with StyleGan    |                                    |
| +10:30 | 3D GANs, tricks and opportunities | [Gihub](SDFGan)                    |


### Datasets

All datasets are in a Google Drive folder [here](https://drive.google.com/drive/folders/1iGvXvMsJXNA5ZFMjXdjiQMtksQ5ruX0o?usp=sharing).

* Texture Synthesis Samples: `TextureSynthesis/Blender/Textures` -> `Textures`
* Texture Synthesis Output:`SynthizedTextures` -> `SynthesizedTextures`
* Tree Models: `GeneratingDatasets/Blender/models` -> `TreeModels`
* Tree Renders: `GeneratingDatasets/Blender/Renders` -> `TreeRenders`

### Notes


* [Open AI Microscope](https://microscope.openai.com/models/)