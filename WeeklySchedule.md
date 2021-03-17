# Weekly Schedule

* [Week 1 (3/17) - Introduction](#week1)

<!--
* [Week 2 (3/22)](#week2)
* [Week 3 (3/29) - Assignment 1 Presentations](#week3)
* [Week 4 (4/5)](#week4)
* [Week 5 (5/12) - Assignment 2 Presentations](#week5)
* [Week 6 (5/19)](#week6)
* [Week 7 (5/26) - Final Presentations 1](#week7)
* [Week 8 (6/3) - Last Class - Final Presentations 2](#week8)
-->

## <a name="week1"></a>Week 1 - Introduction

### Week 1 (3/17) Introductions / Overview
- Course Overview
- Introductions

#### Homework (due before start of next class 3/22)
- **Join** (optional) the IM Discord server #softwareart channel. Use of Discord is optional but allows you to ask questions and share links with the professor and class at any time.

- **Post** one computer generated image that appeals to you to the #softwareart Discord channel (or email it to Mang)

- **Download** openFrameworks for your platform and follow the setup guide
  - [openFrameworks download](https://openframeworks.cc/download/)
  - Download and install the appropriate IDE for your platform
    - [Xcode](https://apps.apple.com/us/app/xcode/id497799835?mt=12) for Mac
    - [Visual Studio Code](https://code.visualstudio.com) (not Visual Studio) for Windows / Linux (also works on Mac)
  - Follow the setup guide for your platform and compile one of the example oF apps
    - [openframeworks Mac Xcode setup](https://openframeworks.cc/setup/xcode/)
    - [openFrameworks Visual Studio Code setup](https://www.youtube.com/watch?v=OTtnB61s9uQ)
  - In case of setup issues, post your question on Discord or email the professor

<!--

## <a name="week2"></a>Week 2

### Week 2 (1/25)
- Review Homework

- Talk about Project 1 Assemblage **due Week 3 (2/1)**
  - **Create** a text artwork using Python. The artwork could be the generated text, the code itself, or a combination
  - The work should:
    - Use algorithms to generate the text
    - Use elements of an existing corpus of texts (e.g. a collection of songs, poems, or scraped web pages)
    - Be presented on a web page
    - Explore how algorithms can recombine generated and existing text to create new expressions
    - Have an emotional impact on the reader, for example through the choice of text corpus and recombination technique
  - The text should be accompanied by the following documentation:
    - A link to your Colab or source code
    - A writeup (on your webpage or in your Colab):
      - How does your algorithm work?
      - Why did you choose this content and algorithm?
      - How does the final output differ from what a person would write?
      - What thoughts or feelings does your output provoke?

- Web scraping
  - [Alice In Wonderland on Project Gutenberg](http://www.gutenberg.org/files/11/11-h/11-h.htm)
  - [02_Scraping code examples](https://github.com/periode/software-art-text/tree/master/02_scraping)
  - [02a Getting a webpage Colab](https://colab.research.google.com/drive/1sNHW7SQ_VBcExKnsUzh311Vkzkbb1enW?usp=sharing)
  - [Requests: HTTP for Humans™](https://requests.readthedocs.io/en/master/)
  - [Beautiful Soup: Build a Web Scraper With Python](https://realpython.com/beautiful-soup-web-scraper-python/)
  - [02b Parsing a webpage Colab](https://colab.research.google.com/drive/13PVkzChLPxuByMlhVbp01cbhQkBvLlwL?usp=sharing)

- Regular expressions
  - [Python regular expressions interactive tutorial](https://www.w3schools.com/python/python_regex.asp)
  - [Python RegEx: re.match(), re.search(), re.findall()](https://www.guru99.com/python-regular-expressions-complete-tutorial.html)
  - [Pattern matching in Python with Regex](https://www.geeksforgeeks.org/pattern-matching-python-regex/) - see related articles for more examples
  - [3 Advanced Python RegEx Examples](https://www.thegeekstuff.com/2014/07/advanced-python-regex/)
  - [02c Matching lines Colab](https://colab.research.google.com/drive/1y4NteL9qCFRLdkLIDEiFALvBsLdi1j7T?usp=sharing)


#### Homework (due before start of next class 1/27)
- **Create** a new text by scraping a page (or pages) from the Internet. Get at least 3 pieces of text out of the scraped text/web page and remix them into a new text using some of the techniques we've learned (or new ones).
    - **Add** a link to your Colab to the [Sketches Spreadsheet](https://docs.google.com/spreadsheets/d/1r7vP1i6M4yef5M0_E-yHuoVpyYvxM1T05yCEytOVe4E/edit?usp=sharing)
- **Read** [grep command in Unix/Linux](https://www.geeksforgeeks.org/grep-command-in-unixlinux)
- **Read** [Grep: A Grammar by Loss Pequeño Glazier](https://github.com/periode/software-art-text/blob/master/assets/readings/glazier_grep.pdf)
  - Some of the output texts are [here](https://web.archive.org/web/20161008133926/http://wings.buffalo.edu:80/epc/authors/glazier/greps/) and [here](https://web.archive.org/web/20110704165723/http://wings.buffalo.edu/epc/authors/glazier/dp/appendices.html)
- **Read and complete** the [Regular Expressions tutorial](https://www.w3schools.com/python/python_regex.asp)
- **Start** thinking about your Assignment 1 Assemblage
  - What source texts will you use?
  - What kind of output do you envision? Poetry? Code? Sense? Nonsense?

### Week 2 (1/27)

- Regular Expressions for text matching / substituion
  - [03a Beautiful Soup x Regular Expressions Colab](https://colab.research.google.com/drive/1AVuFkhnvH1T244L8TvhNqb539F-W6y1s?usp=sharing)
- Replacing strings
  - [Replace strings in Python](https://note.nkmk.me/en/python-str-replace-translate-re-sub/) using builting ```replace``` function
  - [Substituting patterns in text using regex](https://www.geeksforgeeks.org/python-substituting-patterns-in-text-using-regex/)
- Codifying grammar
  - [03_language code examples](https://github.com/periode/software-art-text/tree/master/03_language)
  - [03b TextBlob grammar](https://colab.research.google.com/drive/1GBXRnaXuKp1Ih6qKOR6P3rfdxWlCOLWy?usp=sharing)
- Converting Python code for Colab
  - If you get "print" errors you may need to [convert from Python 2 to 3](https://www.pythonconverter.com/)

#### Homework (due before start of next class 2/1)
- **Finish** your Project 1 Assemblage
  - **Create** a text artwork using Python. The artwork could be the generated text, the code itself, or a combination
  - The work should:
    - Use algorithms to generate the text
    - Use elements of an existing corpus of texts (e.g. a collection of songs, poems, or scraped web pages)
    - Be presented on a web page
    - Explore how algorithms can recombine generated and existing text to create new expressions
    - Have an emotional impact on the reader, for example through the choice of text corpus and recombination technique
  - The text should be accompanied by the following documentation:
    - A link to your Colab or source code
      - See [Syllabus - Coding](https://github.com/NYUAD-IM/Software-Art-Text/blob/main/Syllabus.md#coding)
    - A writeup (on your webpage or in your Colab):
      - See [Syllabus - Writing](https://github.com/NYUAD-IM/Software-Art-Text/blob/main/Syllabus.md#writing)
      - Consider the following prompts:
        - How does your algorithm work?
        - Why did you choose this content and algorithm?
        - How does the final output differ from what a person would write?
        - What thoughts or feelings does your output provoke?
- **Add** the links to your assignment, source code, and documentation to the [Assignments Spreadsheet](https://docs.google.com/spreadsheets/d/19Zj-k-pxUY0rhpp6yGIoJchRbJk0z5lj2b1iqz1W-Uw/edit?usp=sharing)
- **Prepare** to present your work in class (6-8 minutes + discussion)

## <a name="week3"></a>Week 3

### Week 3 (2/1)
- Project 1 Assemblage Presentations

- Introduction to Assignment 2 Fiction

- [Forms in Colab](https://colab.research.google.com/notebooks/forms.ipynb)

- [nltk - Natural Language Toolkit](https://www.nltk.org/)
  - [Things you can do with nltk (nltk book)](http://www.nltk.org/book/)

- Text generation using machine learning / AI
  - [Fake-News-Generating AI Deemed Too Dangerous for Public Release](https://www.extremetech.com/extreme/285857-fake-news-generating-ai-deemed-too-dangerous-for-public-release)
  - [OpenAI Releases Fake News Bot It Previously Deemed Too Dangerous](https://www.extremetech.com/extreme/301662-openai-releases-fake-news-bot-it-previously-deemed-too-dangerous)
    [Faking the News with Natural Language Processing and GPT-2](https://medium.com/@ageitgey/deepfaking-the-news-with-nlp-and-transformer-models-5e057ebd697d)
  - [Finetuning GPT-2 on your own text Colab](https://colab.research.google.com/drive/1uKXS6a9q5qrcU3UdSRpCjYnKHbC-N4pb?usp=sharing)

  - GPT in-depth
    - [GPT explained - multiple difficulty levels](https://towardsdatascience.com/you-can-understand-gpt-3-with-these-youtube-videos-6a30887c928b)
    - [How transformers work](https://towardsdatascience.com/transformers-141e32e69591)
  - Machine learning text generation demo
    - [Talk to transformer](https://app.inferkit.com/demo)


#### Homework (due before start of next class 2/8)
- **Read** an article about GPT-3 and write a 2-3 paragraph response to the [Readings Doc](https://docs.google.com/document/d/1bHBWPR4_hHviqBfkgYN6biPDV4-LfBecwr46cApOEgo/edit?usp=sharing)
  - How do you think machine learning will affect the future of writing?
  - What creative possibilities do you see for automatic text generation?
  - Some suggested articles
    - [Philosophers On GPT-3](https://dailynous.com/2020/07/30/philosophers-gpt-3/)
      - [Responses on Hacker News](https://news.ycombinator.com/item?id=24003384)
    - [Someone let a GPT-3 bot loose on Reddit — it didn’t end well](https://thenextweb.com/neural/2020/10/07/someone-let-a-gpt-3-bot-loose-on-reddit-it-didnt-end-well/)
    - [GPT-3 Creative Fiction](https://www.gwern.net/GPT-3)
    - [OPENAI’S LATEST BREAKTHROUGH IS ASTONISHINGLY POWERFUL, BUT STILL FIGHTING ITS FLAWS](https://www.theverge.com/21346343/gpt-3-explainer-openai-examples-errors-agi-potential)
    - [Here Are A Few Ways GPT-3 Can Go Wrong](https://techcrunch.com/2020/08/07/here-are-a-few-ways-gpt-3-can-go-wrong/)
    - [GPT Crush (look through some examples)](http://gptcrush.com/)

- **SKETCH - Create** a short text by training GPT-2 on your own input text. You can copy the Colab below
  - [Finetuning GPT-2 on your own text Colab](https://colab.research.google.com/drive/1qu0yGoPOGf7_UIdenz--uDZrUl-lbO4K?usp=sharing)
  - **Add** a link to your Colab to the [Sketches Spreadsheet](https://docs.google.com/spreadsheets/d/1r7vP1i6M4yef5M0_E-yHuoVpyYvxM1T05yCEytOVe4E/edit?usp=sharing) (login to your NYU Google account to access)

### Week 3 (2/3)

- Assignment presentations
- Review Homework
- Discussion about Machine Learning / AI

- Discuss Assignment #2 Fiction (due 2/15)
  - **Create** a short work of fiction using Python
  - The work should:
    - Be 3 or more paragraphs long, with a narrative story / arc
    - Be presented on a web page (can be a Colab or standalone webpage)
    - You can incorporate code that you have previously used
    - You can generate text "from scratch", remix existing content, and/or generate text using machine learning (e.g. GPT-2)
    - A new story / fiction should be generated each time the program is run (you can choose 1 or more of the generated outputs to present on the web page)
  - The text should be accompanied by the following documentation:
    - A link to your Colab or source code
      - See [Syllabus - Coding](https://github.com/NYUAD-IM/Software-Art-Text/blob/main/Syllabus.md#coding)
    - A writeup (on your webpage or in your Colab):
      - See [Syllabus - Writing](https://github.com/NYUAD-IM/Software-Art-Text/blob/main/Syllabus.md#writing)
      - Consider the following prompts:
        - How does your algorithm work? How do you generate the storyline?
        - What topics/processes are you exploring in your work? What did you hope to achieve?
          - e.g. infinitely generated possibilities, use of time, sense vs nonsense
        - How does the presentation of your work shape the response of the reader?


#### Homework (due before start of next class 2/8)
- **Read** Virtual Muse (select sign in with SSO then search for "New York University" on right hand side to login with Shibboleth)
  - [Virtual Muse - Chapter 6 Autopoet](https://muse.jhu.edu/chapter/49391/pdf)
  - [Virtual Muse - Chapter 9 Unconclusion](https://muse.jhu.edu/chapter/49394/pdf)
  - **Add** your response to the [Readings Doc](https://docs.google.com/document/d/1bHBWPR4_hHviqBfkgYN6biPDV4-LfBecwr46cApOEgo/edit?usp=sharing)
    - Do you agree with the (un)conclusions that the author makes about computers and poetry? How does your own opinion differ? (1-2 paragraphs)
    - What are some ways could you involve the reader in the process of generating your texts? (1-2 paragraphs)

- **Start** working on your Fiction Assignment. Develop your idea and be prepared to talk about it in class.

## <a name="week4"></a>Week 4

### Week 4 (2/8)

- Assignment idea feedback
- More text generation techniques
  - [gpt2-small-arabic](https://huggingface.co/akhooli/gpt2-small-arabic)
    - [Arabic GPT2 model: Text Generation Colab](https://colab.research.google.com/drive/1posUGU3Qgqq1zAqKJ5tmWXmh8vnNXUiH?usp=sharing)
  - [TextBlob Python Library](https://textblob.readthedocs.io/en/dev/)
    - [NLP for Beginners using TextBlob](https://www.analyticsvidhya.com/blog/2018/02/natural-language-processing-for-beginners-using-textblob/)
    - [04c TextBlob Colab](https://colab.research.google.com/drive/1ar83NFWKr8_kWnIR81TspbiqMCPsRufh?usp=sharing)
    - [Part of Speech Tagging Using TextBlob](https://www.geeksforgeeks.org/python-part-of-speech-tagging-using-textblob/)
    - [03_language examples (Python 2)](https://github.com/periode/software-art-text/tree/master/03_language)

- Text To Speech
  - [04a Text To Speech Colab](https://colab.research.google.com/drive/1_-bHvz7I2fxJkg7qic1Niq8CngG3uov9?usp=sharing)

- Using Web APIs
  - [04d OpenWeather API Colab](https://colab.research.google.com/drive/16yA8Pj2r8qFeBadVer8RBCSvlmIQbECE?usp=sharing)


- Work session

#### Homework (due before start of next class 2/10)
- Keep working on your Fiction Assignment
- Be ready to show some progress in class


### Week 4 (2/10)
- Assignment checkin
- Rhyming
  - [04e Pronouncing Rhymes Colab](https://colab.research.google.com/drive/1d1flDV5bdJ6O688-z1oRvrk883MlB5Pm?usp=sharing)
  - [Phyme library](https://github.com/jameswenzel/Phyme)
- Corpuses of Text
  - [Positive Words](https://www.enchantedlearning.com/wordlist/positivewords.shtml)
  - [Negative Words](https://www.enchantedlearning.com/wordlist/negativewords.shtml)
- Dictionary API
  - [Oxford Dictionaries API](https://developer.oxforddictionaries.com/)
  - [Oxford Dictionary API Python Wrapper](https://pypi.org/project/oxforddictionaries/)
- Web apps on Colab
  - [04e Simple WebApp on Colab](https://colab.research.google.com/drive/1xxfJaSxWVmUHH-BZoJ2niAzv8GEjBP4S?usp=sharing)
  - Public web app running on Colab (Flask/ngrok) with source code in GitHub
    - [Cartoonizer webapp source code](https://github.com/mangtronix/cartoonize)
    - [Cartoonizer Colab](https://colab.research.google.com/github/mangtronix/cartoonize/blob/master/Cartoonize_Colab.ipynb)
    - [4g GPT-2 webapp (Colab)](https://colab.research.google.com/drive/1uX7xByZyav8u4yqdd6G1Ih2oiu71Sx4B?usp=sharing)
    - [GPT-2 running as a webapp on Colab (GitHub)](https://github.com/mangtronix/gpt2-flask)
- Interactive Installations
  - [The Listening Post](http://www.digiart21.org/art/the-listening-post)
  - [Mark Hansen and Ben Rubin: Listening Post, Real-Time Data Responsive Environment 2001 (YouTube)](https://www.youtube.com/watch?v=dD36IajCz6A)
  - [Text Rain by Camille Utterback (YouTube)](https://www.youtube.com/watch?v=f_u3sSffS78)

#### Homework (due 2/15)

- **Finish** your Project 2 Fiction
  - **Create** a short work of fiction using Python
  - The work should:
    - Be 3 or more paragraphs long, with a narrative story / arc
    - Be presented on a web page (can be a Colab or standalone webpage)
    - You can incorporate code that you have previously used
    - You can generate text "from scratch", remix existing content, and/or generate text using machine learning (e.g. GPT-2)
    - A new story / fiction should be generated each time the program is run (you can choose 1 or more of the generated outputs to present on the web page)
  - The text should be accompanied by the following documentation:
    - A link to your Colab or source code
      - See [Syllabus - Coding](https://github.com/NYUAD-IM/Software-Art-Text/blob/main/Syllabus.md#coding)
    - A writeup (on your webpage or in your Colab):
      - See [Syllabus - Writing](https://github.com/NYUAD-IM/Software-Art-Text/blob/main/Syllabus.md#writing)
      - Consider the following prompts:
        - How does your algorithm work? How do you generate the storyline?
        - What topics/processes are you exploring in your work? What did you hope to achieve?
          - e.g. infinitely generated possibilities, use of time, sense vs nonsense
        - How does the presentation of your work shape the response of the reader?
  - **Add** the links to your assignment, source code, and documentation to the [Assignments Spreadsheet](https://docs.google.com/spreadsheets/d/19Zj-k-pxUY0rhpp6yGIoJchRbJk0z5lj2b1iqz1W-Uw/edit?usp=sharing)
  - **Prepare** to present your work in class (6-8 minutes + discussion)


## <a name="week5"></a>Week 5

### Week 5 (2/15)
- Assignment 2 Fiction Presentations

- Discuss Final Assignment
  - For the Final Assignment you can choose to continue working on one of your previous projects or create a new work.
  - The work should:
    - Build on concepts and techniques that we've covered in class
    - Be presented on a web page (can be a Colab or standalone webpage)
    - The presented work should have a definite aesthetic. It could be for example raw code, a polished output, or a physical object, and it should have an intentional artistic presentation.
  - The text should be accompanied by the following documentation:
    - A link to your Colab or source code
      - See [Syllabus - Coding](https://github.com/NYUAD-IM/Software-Art-Text/blob/main/Syllabus.md#coding)
    - A writeup (on your webpage or in your Colab):
      - See [Syllabus - Writing](https://github.com/NYUAD-IM/Software-Art-Text/blob/main/Syllabus.md#writing)
      - Consider the following prompts:
        - How does your project continue on themes / topics you have explored in the class?
        - Why did you choose to present the work in the way you did? Do you consider the code to be the artwork? The output? Both?
        - What algorithms are you using and how did they affect your process and output?
  - **Add** the links to your assignment, source code, and documentation to the [Assignments Spreadsheet](https://docs.google.com/spreadsheets/d/19Zj-k-pxUY0rhpp6yGIoJchRbJk0z5lj2b1iqz1W-Uw/edit?usp=sharing)
  - **Prepare** to present your work in class (6-8 minutes + discussion)

- Transformer Examples
  - [Write with Transformer](https://transformer.huggingface.co/)
  - [5a Transformer Chatbot Colab](https://colab.research.google.com/drive/1XsPJHpyDA31NJ3UrHluAa6ypfy9Dxssm?usp=sharing)
  - [5b Transformer GPT2 Colab](https://colab.research.google.com/drive/1stSZsIqRkcSIf2fUMvjlV7YNVah5RnVu?usp=sharing)


#### Homework (due 2/17)

- **Read** [Listening Post 10 Years On](https://www.researchgate.net/publication/328228327_Revisiting_the_Technical_Achievements_of_Listening_Post_Ten_Years_On) and watch the [Listening Post video](https://www.youtube.com/watch?v=dD36IajCz6A)
  - **Add** 2-3 paragraphs of response to the [Readings Doc](https://docs.google.com/document/d/1bHBWPR4_hHviqBfkgYN6biPDV4-LfBecwr46cApOEgo/edit?usp=sharing)
    - How do the choices of source data contribute to the "liveness" of the installation? Why do you think the artists chose to look for posts starting with "I am"?
    - How does the sonification of the texts affect your experience of them? Do you think the sonfication is an integral part of the piece?
    - Do you feel that Listening Post makes a statement about privacy and eavesdropping? What do you think the work is about?
- **Start** developing your idea for your Final Assignment and be ready to share your idea in class

### Week 5 (2/17)
- Discuss Listening Post
- Final assignment idea checkin
- Stochastic Processes
  - [Chance in Art](https://www.dartmouth.edu/~chance/course/student_projects/Kristin/Kristin.html)
  - [Musikalisches Würfelspiel](https://en.wikipedia.org/wiki/Musikalisches_W%C3%BCrfelspiel)
  - [Musikalisches Würfelspiel (YouTube)](https://www.youtube.com/watch?v=fK2MCXpDWB4)
  - [Iannis Xenakis: Science as art](https://greeknewsagenda.gr/index.php/topics/culture-society/6770-iannis-xenakis)
  - Theo Lutz
    - [Biography](http://dada.compart-bremen.de/item/agent/687)
    - [Stochastic texts by Theo Lutz (1959)](https://www.stuttgarter-schule.de/lutz_schule_en.htm)
    - [Das Schloß (The Castle) by Kafka](https://en.wikipedia.org/wiki/The_Castle_%28novel%29)
    - [Web implementation](https://nickm.com/memslam/stochastic_texts.html)
    - [Python code](https://nickm.com/memslam/stochastic_texts.py)
    - [Interactive web version](https://auer.netzliteratur.net/0_lutz/lutz_original.html)

- Simple Grammars
  - [5c Simple Grammar](https://colab.research.google.com/drive/1lcgSibWsbrdh3d4wZbH9CNPClwaeOSW8?usp=sharing)
- Markov Chains
  - [Markov Chains Explained Visually](https://setosa.io/ev/markov-chains/)
  - [Markovify Python library](https://github.com/jsvine/markovify)
    - [5d Markovify](https://colab.research.google.com/drive/134O8wcue1uDAH9xID2FD0FIjOK0IvcHf?usp=sharing)

#### Homework (due 2/22)
- **Read** [Eliza](https://github.com/periode/software-art-text/blob/master/assets/readings/weizenbaum_eliza.pdf)
  - **Add** 2-3 paragraphs of response to the [Readings Doc](https://docs.google.com/document/d/1bHBWPR4_hHviqBfkgYN6biPDV4-LfBecwr46cApOEgo/edit?usp=sharing)
- **Create** a Colab sketch that generates text using a Markov chain or simple grammar
  - **Add** a link to your Colab to the [Sketches Spreadsheet](https://docs.google.com/spreadsheets/d/1r7vP1i6M4yef5M0_E-yHuoVpyYvxM1T05yCEytOVe4E/edit?usp=sharing)


## <a name="week6"></a>Week 6

### Week 6 (2/22)
- Eliza Discussion
- AI Weirdness
  - [Candy Heart messages written by a neural network](https://aiweirdness.com/post/170685749687/candy-heart-messages-written-by-a-neural-network)
  - [This time I DIDN’T train a neural net to generate candy hearts](https://aiweirdness.com/post/190825122292/this-time-i-didnt-train-a-neural-net-to-generate)
- Artwork examples
  - [Jenny Holzer - Projections](https://projects.jennyholzer.com/projections)
  - [Jenny Holzer - LEDs](https://projects.jennyholzer.com/LEDs)
  - [SMS Slingshot](http://www.vrurban.org/smslingshot.html)
  - [Digital Calligraffiti](http://digitalcalligraffiti.org/)
  - [Infl3ctor](https://www.michaelang.com/project/infl3ctor)
- Final assignment checkin
- Final assignment work session

#### Homework (due 2/24)
- **Read** the highlighted paragraphs and last section "What is Cybertext?" of [Cybertext](https://github.com/periode/software-art-text/blob/master/assets/readings/aarseth_cybertext.pdf)
- **Add** 2-3 paragraphs of response to the [Readings Doc](https://docs.google.com/document/d/1bHBWPR4_hHviqBfkgYN6biPDV4-LfBecwr46cApOEgo/edit?usp=sharing)
  - How does the concept of an information feedback loop apply to your work?
  - What is your interpretation of "text can never be reduced to a stand-alone sequence of words"?
- **Work** on your Final Assignment

### Week 6 (2/24)
- Discuss Cybertext reading
- ASCII art
  - [ASCII art examples (Wikipedia)](https://en.wikipedia.org/wiki/ASCII_art)
  - [ASCII Art Archive](https://www.asciiart.eu/)
  - [The Lost Ancestors of ASCII Art](https://www.theatlantic.com/technology/archive/2014/01/the-lost-ancestors-of-ascii-art/283445/)
- Text on image
  - [6a Text on Image (Colab)](https://colab.research.google.com/drive/132BJhatRuF5u0xgTnnPjYE_gJdurTzbn?usp=sharing)
  - [Drawing Text on Images with Pillow and Python](https://www.blog.pythonlibrary.org/2021/02/02/drawing-text-on-images-with-pillow-and-python/)
  - [Putting text on image with Python](https://www.haptik.ai/tech/putting-text-on-image-using-python/)

- Challenges / opportunities of multi-lingual text
  - [Modernizing Arabic Type for a Digital Audience](https://design.google/library/modernizing-arabic-typography-type-design/)
  - [Arabic Reshaper](https://github.com/mpcabd/python-arabic-reshaper)
  - [6b Multilingual Text on Image (Colab)](https://colab.research.google.com/drive/1J9mzWzkOxKcHQQxqHmNvruvTuEGPGzGq?usp=sharing)

#### Homework (due 3/1)
- **Create** a Colab notebook that overlays multilingual text over an image
  - Choose 3 pairings of text/image that go together to form a trytypch (sequence of 3 images)
  - Why did you choose these particular images and text? What happens when you put them together?
- **Add** a link to your Colab to the [Sketches Spreadsheet](https://docs.google.com/spreadsheets/d/1r7vP1i6M4yef5M0_E-yHuoVpyYvxM1T05yCEytOVe4E/edit?usp=sharing) (login to your NYU Google account to access)

- **FINISH** your Final Assignment. Be ready to present your Final Assignment in class.


## <a name="week7"></a>Week 7

### Week 7 (3/1)
- Final Assignment due
  - For the Final Assignment you can choose to continue working on one of your previous projects or create a new work.
  - The work should:
    - Build on concepts and techniques that we've covered in class
    - Be presented on a web page (can be a Colab or standalone webpage)
    - The presented work should have a definite aesthetic. It could be for example raw code, a polished output, or a physical object, and it should have an intentional artistic presentation.
  - The text should be accompanied by the following documentation:
    - A link to your Colab or source code
      - See [Syllabus - Coding](https://github.com/NYUAD-IM/Software-Art-Text/blob/main/Syllabus.md#coding)
    - A writeup (on your webpage or in your Colab):
      - See [Syllabus - Writing](https://github.com/NYUAD-IM/Software-Art-Text/blob/main/Syllabus.md#writing)
      - Consider the following prompts:
        - How does your project continue on themes / topics you have explored in the class?
        - Why did you choose to present the work in the way you did? Do you consider the code to be the artwork? The output? Both?
        - What algorithms are you using and how did they affect your process and output?
  - **Add** the links to your assignment, source code, and documentation to the [Assignments Spreadsheet](https://docs.google.com/spreadsheets/d/19Zj-k-pxUY0rhpp6yGIoJchRbJk0z5lj2b1iqz1W-Uw/edit?usp=sharing)
  - **Prepare** to present your work in class (10-12 minutes + discussion)

- Final Assignment Presentations

- Artist Talk

### Week 7 (3/3)
- Final Assignment Presentations
- Course Review
- Goodbyes!

-->


<!--
- **Read**
  - [Villem Flusser "On Doubt"](https://github.com/periode/software-art-text/blob/master/assets/readings/flusser_doubt.pdf)
  - **Add** 2-3 paragraphs of response to the [Readings Doc](https://docs.google.com/document/d/1bHBWPR4_hHviqBfkgYN6biPDV4-LfBecwr46cApOEgo/edit?usp=sharing) (login to your NYU Google account to access)
-->
