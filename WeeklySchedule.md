# Weekly Schedule - Spring 2022

* [Week 1 (3/23) - Introduction](#week1)
* [Week 2 (3/28) - Getting Started](#week2)
* [Week 3 (4/4) - GitHub / Work Session / Color](#week3)
* [Week 4 (4/11) - Assignment 1 Presentations / Motion](#week4)
* [Week 5 (4/18) - More Motion](#week5)
* [Week 6 (4/25) - Assignment 2 Presentations / Storytelling](#week6)
* [Week 7 (5/5) - Glitch / Exhibition Visit / Work Session](#week7)
* [Week 8 (5/9) - Last Class - Final Presentations 2](#week8)

## <a name="week1"></a>Week 1 - Introduction

### Week 1.1 (3/23) Introductions / Overview
- Course Overview
- Introductions

- openFrameworks Artist - junkiyoshi
  - [プログラミング DE 落描き - Programming Sketch](https://junkiyoshi.com/)
  - [junkiyoshi (GitHub)](https://github.com/junkiyoshi)
  - [kiyoshinakauchi (Instagram)](https://www.instagram.com/kiyoshinakauchi/)

#### Homework (due before start of next class 3/28)
- **Join** (optional) the IM Discord server #softwareart channel. Use of Discord is optional but allows you to ask questions and share links with the professor and class at any time.

- **Post** one computer generated image that appeals to you to the #softwareart Discord channel or Brightspace [Inspiration Topic](https://brightspace.nyu.edu/d2l/le/171380/discussions/topics/307152/View)

- <a name="of_install">**Download**</a> openFrameworks and an IDE (Integrated Development Editor) for your platform and follow the setup guide
    - [openFrameworks download](https://openframeworks.cc/download/) 
    - [openFrameworks Mac Xcode setup](https://openframeworks.cc/setup/xcode/)
      - It's preferable to download Xcode directly from the Apple Developer site rather than from the App Store
      - You can find the download link for the most recent Xcode supported by your MacOS at [xcodereleases.com](https://xcodereleases.com/)
      - Click the toggle for "Releases" and then look for the most recent released Xcode that you can run
      - You can check your MacOS version by clicking ->About This Mac
    - [openFrameworks Visual Studio 2019 Windows setup](docs/openFrameworksVS2019.md)
  - In case of setup issues, post your question on Discord or email the professor


- If using the latest Xcode you may need to enable the "New Build System" if you see this error
![Legacy Build 1](docs/Legacy_Build_1.png?raw=true "Legacy Build 1")
![New Build System](https://forum.openframeworks.cc/uploads/default/original/3X/3/b/3b22ab0e54fb7b9941db75cfee2688631aa323f3.jpeg)




## <a name="week2"></a>Week 2

### Week 2.1 (3/28)
- Review Homework

- Talk about Assignment 1 Still **due Week 3 (4/11)**
  - [Assignment 1 Still instructions](Assignments.md#assignment-1---still)

- [Artists working with computational media](https://github.com/periode/software-art-image/wiki/artists)

- Animated GIFs with openFrameworks on Tumblr
    - https://necessary-disorder.tumblr.com/

- Introduction to openFrameworks

- Workshop - Getting Started
  - Installing oF
  - Building examples
  - Writing your own code
  - Getting help
    - Discord
    - [Other sources of help](https://github.com/periode/software-art-image/wiki/code-help)

  - Sharing code

#### Homework (due 3/30)
- **Build and run** an oF example on your computer
- **Watch** tutorials 0-7 from the [openFrameworks tutorial series](https://www.youtube.com/watch?v=dwt2NAd1ZYY&list=PL4neAtv21WOlqpDzGqbGM_WN2hc5ZaVv7&index=1)
- **Code** an openFrameworks app that makes a different composition of 3 circles each time it's run (consider what colours you use)
- **Post** your image to [Brightspace Discussion -> Circles](https://brightspace.nyu.edu/d2l/le/171380/discussions/topics/307719/View)
  - You can take a screenshot manually or use code:
    - [Save/export files (oF)](https://openframeworks.cc/learning/01_basics/how_to_save_a_file/)
    - [imageSaver example in examples/input_output](https://github.com/openframeworks/openFrameworks/tree/master/examples/input_output/imageSaverExample) in your openFrameworks directory
  - You don't have to submit the code for this exercise
- **Read** and be ready to discuss
  - [What is computer art?](https://github.com/periode/software-art-image/blob/master/assets/readings/required/kawano_art.pdf) Hiroshi Kawano, 1975
  - [Computer and the Visual Arts](https://github.com/periode/software-art-image/blob/master/assets/readings/required/noll_computers_visualarts.pdf) Michael Noll, 1966

### Week 2.2 (3/30)
- Reading discussion
  - [Hiroshi Kawano](https://www.openculture.com/2017/05/philosopher-hiroshi-kawano-makes-digital-mondrians-in-1964-the-birth-of-digital-art.html)
  - [Selected Works](http://www03.zkm.de/kawano/index.php/en/works)
  - [Perlin Noise](https://www.youtube.com/watch?v=XbiAGyodS3U)
- Review Homework
  - [ofSetCircleResolution](https://openframeworks.cc/documentation/graphics/ofGraphics/#!show_ofSetCircleResolution)
- Algorithms and art
  - [Why Love Generative Art?](https://www.artnome.com/news/2018/8/8/why-love-generative-art)
  - [Vera Molnár: the computer art goddess](https://opheliaming.medium.com/vera-moln%C3%A1r-the-computer-art-goddess-26a84efbea4b)
  - [Vera Molnar - Artist and Computer](https://www.atariarchives.org/artist/sec11.php)
  - [Vera Molnar - 25 Carrès (25 Squares)](https://digitalartmuseum.org/gallery/image/8851.html)
  - [25 Squares (Open Processing Sketch)](https://openprocessing.org/sketch/209391/)

- Colour theory
  - [Guide to Understanding Color Theory](https://99designs.com/blog/tips/the-7-step-guide-to-understanding-color-theory/)
  - [Color Theory Basics (YouTube)](https://www.youtube.com/watch?v=L1CK9bE3H_s)
  - [Interaction of Color](https://www.brainpickings.org/2013/08/16/interaction-of-color-josef-albers-50th-anniversary/)
  - [ofColor](https://openframeworks.cc/documentation/types/ofColor/)


  #### Homework (due 4/4)
  - **Watch** these Tutorials
    - [openFrameworks superBasics 6: drawing generative lines tutorial (YouTube)](https://www.youtube.com/watch?v=S4KMORhoFMk)
    <!-- - [Line drawing](https://www.youtube.com/watch?v=huUtLo5FjWw&list=PL4neAtv21WOlqpDzGqbGM_WN2hc5ZaVv7&index=26) -->
    - [ofxGUI](https://www.youtube.com/watch?v=OzTtd79vfQw&list=PL4neAtv21WOlqpDzGqbGM_WN2hc5ZaVv7&index=18)
    - [ofxParameter](https://www.youtube.com/watch?v=DX86QshkduQ&list=PL4neAtv21WOlqpDzGqbGM_WN2hc5ZaVv7&index=19)
    - [screenshot](https://www.youtube.com/watch?v=A-QbjrGSj60&list=PL4neAtv21WOlqpDzGqbGM_WN2hc5ZaVv7&index=17)

  - **Start** coding an openFrameworks app that makes a drawing with lines and points that can be controlled by sliders
    - The sliders could control e.g. thickness, number of lines, or color
    - Final app / sketch is due 4/6
  - **Sign up** for [GitHub](https://github.com)
  - **Download** [GitHub Desktop](https://desktop.github.com/)
  - **Read** [Getting Started with Git and GitHub Desktop](https://www.codecademy.com/article/what-is-git-and-github-desktop)


## <a name="week3"></a>Week 3

### Week 3.1 (4/4)
- Review homework
- Algorithmic techniques in oF
- [Software-Art-Image/code](https://github.com/NYUAD-IM/Software-Art-Image/tree/main/code)
- [Code examples from previous class](https://github.com/periode/software-art-image)
- [ofxAddons](https://ofxaddons.com/categories)
  - [Addons Howto](https://ofxaddons.com/pages/howto)
  - [Freshest addons](https://ofxaddons.com/freshest)

- <a name="github">Sharing code on GitHub</a>
  - [Getting Started with Git and GitHub Desktop](https://www.codecademy.com/article/what-is-git-and-github-desktop)
  - [GitHub](https://github.com/)
    - [GitHub Desktop](https://desktop.github.com/)
  - [Software-Art-Image (GitHub)](https://github.com/NYUAD-IM/Software-Art-Image)
    - Using the project generator to create Xcode project file for examples  
  - [Dan Shiffman's Git and GitHub for Poets (YouTube)](https://www.youtube.com/playlist?list=PLozRqGzj97d02YjR5JVqDwN2K0cAiT7VK)
  - Setting up repository
  - Copy this [.gitignore file](https://raw.githubusercontent.com/NYUAD-IM/Software-Art-Image/main/.gitignore) into your repository root directory
    - Then some Xcode files that shouldn't be checked in will be ignored
    - [Renaming to .whatever on Mac](https://stackoverflow.com/questions/5891365/mac-os-x-doesnt-allow-to-name-files-starting-with-a-dot-how-do-i-name-the-hta)
  - [iTerm2 Terminal (Mac)](https://iterm2.com/)
  - Creating a new project
  - Moving existing projects
  - Documentation
    - README.md
    - [Markdown basic syntax](https://www.markdownguide.org/basic-syntax/)
    - [GitHub flavored markdown](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax) - shows how to include images
- Work session

- Additional Resources
  - [Drawing Lines (ofBook)](https://openframeworks.cc/ofBook/chapters/lines.html)
  - [openFrameworks superBasics 6: drawing generative lines tutorial (YouTube)](https://www.youtube.com/watch?v=S4KMORhoFMk&list=PL6QF0yo3Zj7DbN76C5-_6VCDF5CPBIz6l&index=6)
  - [ofPolyline](https://openframeworks.cc/documentation/graphics/ofPolyline/) - see curveTo for bezier curves
  - [openFrameworks superBasics 7: more generative drawing tutorial (YouTube)](https://www.youtube.com/watch?v=uVMyp3HzV_E)
  - [openFrameworks superBasics 10: draw generative sinewave animations tutorial (YouTube)](https://www.youtube.com/watch?v=kYejiSrzFzs&list=PL6QF0yo3Zj7DbN76C5-_6VCDF5CPBIz6l&index=10)
  - [ofColor::fromHsb](https://openframeworks.cc/documentation/types/ofColor/#show_fromHsb) - create color from HSB


#### Homework (due 4/6)
- **Finish** your lines oF app
- **Submit** a link to your oF app and a short write-up of your algorithm and creative process using Brightspace->Assignments->Sketch 1 Lines
- **Read**
  - [Solo for a Black Stroke](https://github.com/periode/software-art-image/blob/master/assets/readings/required/molnar_line.pdf), Vera Molnar, 1997
  - [Point](https://github.com/pierredepaz/software-art-image/blob/master/assets/readings/required/kandinsky_point.pdf), Wassily Kandinsky, 1926

### Week 3.2 (4/6)
- Review sketches
- Discuss readings

- Requested techniques
  - [ofPushStyle](https://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofPushStyle)
    - See list of properties in [ofStyle](https://openframeworks.cc/documentation/types/ofStyle/)

- Colour and the interactions thereof
  - [Interaction of Color Explorer (oF App)](https://github.com/NYUAD-IM/Software-Art-Image/tree/main/code/color_video)


## <a name="week4"></a>Week 4

### Week 4.1 (4/11)
- Present Assignment 1 Still

- Talk about [Assignment 2 Motion](Assignments.md#assignment-2---motion)
- [Zach Lieberman | Poetic computation (YouTube)](https://www.youtube.com/watch?v=bmztlO9_Wvo&t=82s)

- Sinusoids and other functions
  - [trigonometryExample](https://github.com/openframeworks/openFrameworks/tree/master/examples/math/trigonometryExample)
  - [trigonometricMotionExample](https://github.com/openframeworks/openFrameworks/tree/patch-release/examples/math/trigonometricMotionExample)
  - [periodicSignalsExample](https://github.com/openframeworks/openFrameworks/tree/patch-release/examples/math/periodicSignalsExample)
  - [openFrameworks superBasics 10: draw generative sinewave animations tutorial](https://www.youtube.com/watch?v=kYejiSrzFzs&list=PL6QF0yo3Zj7DbN76C5-_6VCDF5CPBIz6l&index=10)

- Resources
  - [openFrameworks superBasics (YouTube)](https://www.youtube.com/playlist?list=PL6QF0yo3Zj7DbN76C5-_6VCDF5CPBIz6l)
  - [ofxAnimatable](https://github.com/armadillu/ofxAnimatable) addon for making animations with different motion curves

#### Homework (due 4/13)
- **Read** [Experimental Animation: The Joy of Movement by Jules Engel](https://github.com/periode/software-art-image/blob/master/assets/readings/required/engel_movement.pdf)
- **Read** [Animation by Zach Lieberman (ofBook)](https://openframeworks.cc/ofBook/chapters/animation.html)
  - Look through [ofBook Animation Examples (mangtronix GitHub)](https://github.com/mangtronix/ofBook/tree/master/chapters/animation/code)
  - For some examples you may need to change the code to remove `ofAppGlutWindow` - see this [example fix](https://github.com/mangtronix/ofBook/commit/f41f2197d118c17d34a8f9da1b6609251c8d6307)
- **Watch** [openFrameworks superBasics 10: draw generative sinewave animations tutorial (YouTube)](https://www.youtube.com/watch?v=kYejiSrzFzs&list=PL6QF0yo3Zj7DbN76C5-_6VCDF5CPBIz6l&index=11)
- **Start** coding an oF app (sketch) that makes a cyclical animation

### Week 4.2 (4/13)
- Discuss Reading
  - [Jules Engel Selected Works (YouTube)](https://www.youtube.com/watch?v=JisOpJbHwVY)
  - [Lilac Garden (YouTube)](https://www.youtube.com/watch?v=ldK_cHj21FY)
- More Motion
  - [simpletimeline example](https://github.com/NYUAD-IM/Software-Art-Image/tree/main/code/simpletimeline)
  - [Using ofxPlaylist - A Library for Dynamic Animations](https://poniesandlight.co.uk/reflect/ofxplaylist/)
    - [ofxPlaylist Addon](https://github.com/tgfrerer/ofxPlaylist)
    - [ofxPlaylist simpleExample](https://github.com/tgfrerer/ofxPlaylist/tree/master/simpleExample)

- [ofPushMatrix](https://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofPushMatrix)
  - save/restore 3D transform
- [ofPushStyle](https://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofPushStyle)
  - save/restore drawing properties (color, etc)

- [ofLog](https://openframeworks.cc/documentation/utils/ofLog/)
  - Debugging statements!

- Vectors (mutable lists of data)
  - https://openframeworks.cc/ofBook/chapters/stl_vector.html



#### Homework (due 4/18)
  - **Read** [Digital Harmony of Sound and Light](https://github.com/periode/software-art-image/blob/master/assets/readings/required/alves_harmony.pdf)
  - **Code** an openFrameworks app (sketch) that makes a cyclical animation
  - **Write** a 2-3 paragraph README.md file
  - **Upload** your code to GitHub
  - **Submit** a link to your code via Brightspace->Assignments->Sketch 2

## <a name="week5"></a>Week 5

### Week 5.1 (4/18)
- Review Sketches
- Discuss reading
  - [An Optical Poem - produced by Oskar Fischinger 1938 (YouTube)](https://www.youtube.com/watch?v=6Xc4g00FFLk)
  - Music Animation Machine
    - [Videos](http://www.musanim.com/watch_mam.html)
    - [Techniques](http://www.musanim.com/Techniques/)
    - [Use of color in the Music Animation Machine](http://www.musanim.com/Color/)
    - [Synchronization of Animation and Audio](http://www.musanim.com/ProductionNotes/synchronization.html)
    - [ofxMidi](https://github.com/danomatika/ofxMidi)
  - [John Whitney- Matrix (1971) (YouTube)](https://www.youtube.com/watch?v=ryKT1uIPIaI)
  - [Emergent Visual Music - Ronald Pellegrino (YouTube)](https://www.youtube.com/watch?v=mQXa9gPH3eU)
  - [Breath of the Compassionate - Bill Alves (YouTube)](https://www.youtube.com/watch?v=bl6bDavWVa8)

- Work Examples
  - [Manual Input Sessions - An audiovisual performance by Golan Levin and Zach Lieberman](http://www.tmema.org/mis/)
  - [Manual Input Sessions - Golan Levin, Zach Liberman (YouTube)](https://www.youtube.com/watch?v=3paLKLZbRY4)
  - [messa di voce, Golan Levin and Zach Lieberman](http://www.tmema.org/messa/messa.html)
  - [Messa di Voce (Performance version, 2003) (YouTube)](https://www.youtube.com/watch?v=STRMcmj-gHc)

- Assignment checkin

- Recording video
  - [How to record the screen on your Mac](https://support.apple.com/en-us/HT208721)
  - [Screen Recording with QuickTime](https://libguides.rowan.edu/c.php?g=248114&p=4711659)
  - [BlackHole: Virtual Audio Driver](https://github.com/ExistentialAudio/BlackHole)


  - [OF better screen captures!](https://fusefactory.github.io/openfuse/coding/openFrameworks-Better-Quality-Screen-Recording/)
  - Install [ofxFFmpegRecorder](https://github.com/Furkanzmc/ofxFFmpegRecorder)
  - Install ffmpeg
    - [ffmpeg Mac binary](https://evermeet.cx/ffmpeg/)

- Sound reactive visuals
  - [openFrameworks tutorial series - episode 010 - audio (YouTube)](https://www.youtube.com/watch?v=r9bDSvN-3Zk)
  - [Sound (ofBook)](https://openframeworks.cc/ofBook/chapters/sound.html)
  - [ofSoundGetSpectrum](https://openframeworks.cc/documentation/sound/ofSoundPlayer/#show_ofSoundGetSpectrum)
  - [soundPlayerFFTExample (GitHub)](https://github.com/openframeworks/openFrameworks/tree/master/examples/sound/soundPlayerFFTExample)

#### Homework (due 4/20)
  - **Watch** [Draw complex animations with screen translate - tutorial: openFrameworks superBasics e11 (YouTube)](https://www.youtube.com/watch?v=5N12MPK1aC4)
  - **Read** [Daily Sketches in 2016, Zach Lieberman](https://zachlieberman.medium.com/daily-sketches-2016-28586d8f008e)
    - Pick one of the examples that stands out to you to discuss in class


### Week 5.2 (4/20)
- Code Examples
  - [simpleTimerEventExample (GitHub)](https://github.com/openframeworks/openFrameworks/tree/master/examples/events/simpleTimerEventExample)
  - [motion example (GitHub)](https://github.com/mangtronix/software-art-image/tree/master/04_motion/motion)

- Noise
  - [Noise - The Book of Shaders](https://thebookofshaders.com/11/)
  - [Perlin Noise & Random Comparison](https://codepen.io/Aminerman/full/JREYYO)
  - [Noise Functions - UTexas CS354](https://www.cs.utexas.edu/~theshark/courses/cs354/lectures/cs354-21.pdf) - technical explanation of different noise techniques with nice pictures
  - [openFrameworks tutorial series - episode 038 - ofNoise (YouTube)](https://www.youtube.com/watch?v=XbiAGyodS3U)
  - [Generative Typography – A Study](http://www.jacobstanton.com/generative-typography-a-study/)
  - [openFrameworks noise examples (GitHub)](https://github.com/openframeworks/openFrameworks/tree/master/examples/math)

- Introduction to Meshes
  - [ofBook > Graphics > Meshes](https://openframeworks.cc/ofBook/chapters/openGL.html#meshes)
  - [ofBook > Basics of Generating Meshes from an Image](https://openframeworks.cc/ofBook/chapters/generativemesh.html)
  - [openFrameworks creative coding: 3D meshes and Perlin noise - Dan Buzzo (YouTube)](https://www.youtube.com/watch?v=NYl_yLBBWEM)
- Work session


#### Homework (due 4/25)
- Submit your your Assignment 2 via Brightspace
- Be prepared to present your work in class (5-7 minute presentatation)

## <a name="week6"></a>Week 6

### Week 6.1 (4/25)
- Present Assignment 2 Motion
- Discuss Assignment 3 Final / Storytelling
- [Storytelling Fundamentals](https://docs.google.com/presentation/d/1upMjbfCNKeq0U_Jbl-ZM3vyWwDELUeGgw4OiKL2kvlk/edit?usp=sharing)
- Storytelling with live software
  - [Three Drops - Scott Snibbe](https://www.snibbe.com/three-drops)
  - [Falling Girl - Scott Snibbe](https://www.snibbe.com/digital-art#/projects/interactive/fallinggirl/)
  - [The Treachery of Sanctuary - Chris Milk](http://milk.co/treachery.html)
  - [Reza Ali](https://www.syedrezaali.com/)
    - [misshapenness](https://www.syedrezaali.com/#/misshapenness/)
    - [lormalized](https://www.syedrezaali.com/#/lormalized/)

#### Homework (due 4/27)
- **Read** [Sentences on Conceptual Art - Sol Lewitt](https://github.com/periode/software-art-image/blob/master/assets/readings/required/lewitt_conceptual.pdf)
- **Read** [The Image of the Change: From the I Ching to the Evolution of Chaos - Yuting Zou](https://github.com/periode/software-art-image/blob/master/assets/readings/optional/zou_iching.pdf)
- **Start** thinking about your final assignment and be ready to discuss your idea next class


### Week 6.2 (4/27)
- Assignment check-in
- Live performance techniques
  - [StateMachine example (GitHub)](https://github.com/NYUAD-IM/Software-Art-Image/tree/main/code/StateMachine)
  - [Experimental Game Development (ofBook)](https://openframeworks.cc/ofBook/chapters/game_design.html)

- Yellowtail - Golan Levin
  - [Yellowtail](https://web.archive.org/web/20201022032127/http://www.flong.com/projects/yellowtail/)
  - [openFrameworks port)](https://github.com/n1ckfg/yellowtails/tree/master/openframeworks/yellowtail)
  - [NFT announcement (twitter)](https://mobile.twitter.com/golan/status/1373765546920054785)
  - [Yellowtail NFT](https://www.hicetnunc.xyz/objkt/9954)

- OpenCV

#### Homework (due 5/5)
- **Refine** your final assignment idea
- **Read** [The Perception of Glitch - Rosa ](https://github.com/periode/software-art-image/blob/master/assets/readings/required/menkman_glitch.pdf)
- See also [The Glitch Art Genre](https://www.ofluxo.net/the-glitch-art-genre-by-rosa-menkman/)

## <a name="week7"></a>Week 7

### Week 7 (5/2) - NO CLASS

### Week 7 (5/4) - NO CLASS

### Week 7.1 (5/5) - CLASS MEETS THURSDAY (2:40-5:20pm)
- Glitch Art
  - Discussion
  - Hex Editors
    - [Hexadecimal numeral system (Wikipedia)](https://simple.wikipedia.org/wiki/Hexadecimal)
    - [ASCII character encoding (Wikipedia)](https://en.wikipedia.org/wiki/ASCII)
    - [hexed.it](https://hexed.it/)
    - [Xcode Open As->Hex](http://iosbrain.com/blog/2018/01/23/xcode-tidbits-open-as-hex-open-as-source-code-git-line-endings-and-text-encoding/)
  - [Super Mario Clouds - Cory Archangel](https://whitney.org/collection/works/20588)
    - [21c - Game mods](http://www.beigerecords.com/cory/21c/21c.html)
    - [Defining an Ethical Framework for Preserving Cory Arcangel’s Super Mario Clouds](https://resources.culturalheritage.org/emg-review/volume-4-2015-2016/magnin/)
  - Download a digital file and glitch something!
  - Malicious data
    - [Hiding Webshell Backdoor Code in Image Files](https://www.trustwave.com/en-us/resources/blogs/spiderlabs-blog/hiding-webshell-backdoor-code-in-image-files/)
    - [Can simply decompressing a JPEG image trigger an exploit?](https://security.stackexchange.com/questions/97856/can-simply-decompressing-a-jpeg-image-trigger-an-exploit)
    - [Signal countermeasures](https://signal.org/blog/cellebrite-vulnerabilities/)

- [ofFile (openFrameworks)](https://openframeworks.cc/documentation/utils/ofFile/)
  - [ofBuffer](https://openframeworks.cc/documentation/utils/ofBuffer/)
  - [ofFile::writeFromBuffer](https://openframeworks.cc/documentation/utils/ofFile/#show_writeFromBuffer)


- Virtual Exhibition Visit - [Programmed: Rules, Codes, and Choreographies in Art, 1965–2018 - Whitney Museum of Art](https://whitney.org/exhibitions/programmed)
  - [Rule, Instruction, Algorithm:
Ideas as Form](https://whitney.org/exhibitions/programmed?section=1&subsection=1#exhibition-artworks)
    - [Josef Albers, Homage to the Square I, 1967](https://whitney.org/exhibitions/programmed?section=1&subsection=2#exhibition-artworks)
    - [Manfred Mohr, Band Structures P-021-U, 1970–1983](https://whitney.org/exhibitions/programmed?section=1&subsection=18#exhibition-artworks)
  - Collapsing Instruction and Form  
    - [W. Bradford Paley, CodeProfiles, 2002](https://whitney.org/exhibitions/programmed?section=3&subsection=3#exhibition-artworks)
- Project checkins
- Work Session

- Additional Resources
  - [Nature of Code openFrameworks port](https://github.com/superartificial/Nature-Of-Code-Open-Frameworks-Port/tree/master/Nature%20Of%20Code%20OF) - code examples from Dan Shiffman's Nature of Code rewritten for openFrameworks
- Additional Resources - Sound
    - [Load and play sound](https://openframeworks.cc/learning/04_sound/play_a_sound/)
    - [Sound (ofBook)](https://openframeworks.cc/ofBook/chapters/sound.html)
    - [ofSoundPlayer::getPosition()](https://openframeworks.cc/documentation/sound/ofSoundPlayer/#show_getPosition)
    - [openFrameworks / examples / sound](https://github.com/openframeworks/openFrameworks/tree/master/examples/sound)


#### Homework (due 5/9)
- **Finish** your [Final Assignment](https://github.com/NYUAD-IM/Software-Art-Image/blob/main/Assignments.md#assignment-3---storytelling)
- **Submit** your assignment via Brightspace
- **Prepare** to give a 5-6 minute presentation and 2-3 minute performance in class


## <a name="week8"></a>Week 8

### Week 8.1 (5/9)
- Final Assignment Presentations / Performances

## Week 8.2 (5/11) - FINAL CLASS
- Final Assignment Presentations / Performances
- Course Review
  - Course Review Form
- Goodbyes for now!
