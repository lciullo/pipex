<h1 align="center"> 🔍Pipex</h1>

<p align="center">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C"/>
  <img src="https://img.shields.io/badge/42-000000?style=for-the-badge&logo=42&logoColor=white" alt="42"/>
</p>

A C implementation of the shell pipe mechanism (|), developed as part of the 42 curriculum.

## 📋 Overview

Pipex recreates the behavior of shell pipes in C, demonstrating how data flows between processes. This project focuses on understanding process creation, inter-process communication, and file descriptor manipulation in Unix-like systems.

## ✨ Features

### Core Functionality
* Pipeline implementation
* Process creation and management
* File descriptor handling
* Command execution
* Error management

### Input/Output Handling
* Input file reading
* Output file creation/writing
* Standard input/output redirection
* File permission management
* Buffer management

### Command Processing
* Command parsing
* Path resolution
* Argument handling
* Environment variable support
* Exit status handling

## 🚀 Getting Started

### Prerequisites
* GCC compiler
* Make
* Unix-like operating system

### Installation

```bash
# Clone the repository
git clone https://github.com/lciullo/pipex
cd pipex

# Compile the project
make
```

### Usage

```bash
# Basic usage
./pipex infile "cmd1" "cmd2" outfile

# Example
./pipex input.txt "grep hello" "wc -l" output.txt

# This is equivalent to shell command:
< input.txt grep hello | wc -l > output.txt
```

## 🎯 Project Objectives
* Understand Unix process management
* Implement inter-process communication
* Handle file operations securely
* Manage program execution
* Practice error handling
* Learn about file descriptors
* Master fork and pipe system calls

## 🛠️ Technical Implementation

### Process Management
* Fork system call usage
* Child process creation
* Parent process coordination
* Process exit handling
* Zombie process prevention

### Pipe Mechanism
* Pipe creation
* File descriptor redirection
* Data flow management
* Buffer handling
* Pipe closure

### File Operations
* File opening/closing
* Permission handling
* Error checking
* File descriptor management
* File redirection

### Command Execution
* Path resolution
* Command validation
* Argument parsing
* Environment handling
* Execution error management

## 🧠 Learning Outcomes
This project provides experience in:
* Process management in Unix
* Inter-process communication
* File descriptor manipulation
* Error handling in C
* Memory management
* System call usage
* Program execution flow
* Shell command behavior

## 🔍 Error Handling
* File access errors
* Command execution errors
* Memory allocation failures
* Pipe creation errors
* Permission issues
* Process creation errors

## 🤝 Contributor
- **Lisa Ciullo** - [@lciullo](https://github.com/YOUR_USERNAME)

## 📝 License
This project is part of the 42 school curriculum.
