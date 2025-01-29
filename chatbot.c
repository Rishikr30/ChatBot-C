#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT 100

// Function to convert input to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Function to check if a string contains another string
int contains(const char *str, const char *substr) {
    return strstr(str, substr) != NULL;
}

int main() {
    char input[MAX_INPUT];
    int running = 1;
    
    printf("Chatbot: Hi! I'm a simple chatbot. How can I help you?\n");
    printf("(Type 'bye' to exit)\n\n");
    
    while (running) {
        printf("You: ");
        fgets(input, MAX_INPUT, stdin);
        
        // Remove newline character
        input[strcspn(input, "\n")] = 0;
        
        // Convert input to lowercase for easier matching
        toLowerCase(input);
        
        // Check for exit command
        if (strcmp(input, "bye") == 0) {
            printf("Chatbot: Goodbye! Have a great day!\n");
            running = 0;
            continue;
        }
        
        // Response logic
        if (strlen(input) == 0) {
            printf("Chatbot: Please say something!\n");
        }
        else if (contains(input, "hello") || contains(input, "hi") || contains(input, "hey")) {
            printf("Chatbot: Hello there! How are you today?\n");
        }
        else if (contains(input, "how are you")) {
            printf("Chatbot: I'm doing well, thank you for asking!\n");
        }
        else if (contains(input, "name")) {
            printf("Chatbot: My name is SimpleBot!\n");
        }
        else if (contains(input, "weather")) {
            printf("Chatbot: I'm sorry, I can't check the weather. I'm a very simple bot!\n");
        }
        else if (contains(input, "help")) {
            printf("Chatbot: I can respond to greetings, tell you my name, and chat about basic topics!\n");
        }
        else if (contains(input, "thank")) {
            printf("Chatbot: You're welcome!\n");
        }
        else {
            printf("Chatbot: I'm not sure how to respond to that. Try asking me something else!\n");
        }
    }
    
    return 0;
}