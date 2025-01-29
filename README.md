# ChatBot-C
Simple Chat Bot Using C language !

# Simple C Chatbot

A lightweight command-line chatbot implemented in C that demonstrates basic natural language interaction patterns. This project serves as a simple example of pattern matching and user interaction in C programming.

## Features

- Interactive command-line interface
- Case-insensitive input handling
- Pattern-based response system
- Continuous conversation loop until exit command
- Basic error handling for empty inputs

## Responses

The chatbot can understand and respond to:
- Greetings (hello, hi, hey)
- Questions about its identity
- General wellness queries ("how are you")
- Weather-related questions (with limitation notice)
- Help requests
- Thank you messages
- Exit command ("bye")

## Requirements

- GCC compiler
- Standard C libraries
- Operating system: Windows/Linux/MacOS

## Installation

1. Clone the repository:
```bash
git clone https://github.com/Rishikr30/ChatBot-C.git
cd ChatBot-C
```

2. Compile the program:
```bash
gcc chatbot.c -o chatbot
```

3. Run the chatbot:
```bash
./chatbot
```

## Usage

After starting the program, you can interact with the chatbot through the command line:

```
Chatbot: Hi! I'm a simple chatbot. How can I help you?
(Type 'bye' to exit)

You: hello
Chatbot: Hello there! How are you today?

You: what's your name
Chatbot: My name is SimpleBot!

You: bye
Chatbot: Goodbye! Have a great day!
```

## Project Structure

```
ChatBot-C/
│
├── chatbot.c          # Main source code
├── README.md          # Project documentation
```

## Contributing

Contributions are welcome! Here are some ways you can contribute to this project:

1. Report bugs
2. Suggest new features
3. Add more response patterns
4. Improve the pattern matching system
5. Add memory of previous interactions
6. Implement more sophisticated natural language processing

Please feel free to submit a pull request.

## Potential Improvements

Future enhancements could include:
- More sophisticated pattern matching
- Response variations for more natural conversation
- Memory of previous interactions
- Custom response addition through configuration files
- Basic learning capabilities
- Sentiment analysis


## Author

Rishi Kumar

## Acknowledgments

- Inspired by early chatbots like ELIZA
- Built as a learning project for C programming

---
Feel free to star ⭐ the repository if you find it helpful!
