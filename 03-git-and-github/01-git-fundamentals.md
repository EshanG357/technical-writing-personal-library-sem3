
# Git Fundamentals and Version Control

## 1. Introduction

Git is a distributed version control system used to track changes in files and coordinate software development.

It allows developers to maintain different versions of a project, examine its history, and collaborate without losing previously recorded work.

Git is widely used in software engineering, research, machine learning, and technical documentation.

## 2. What is Version Control?

Version control is the process of recording and managing changes made to files over time.

It allows users to maintain a history of modifications and return to earlier versions when required.

### 2.1 Importance of Version Control

Version control provides several advantages:

- Tracks modifications made to project files.
- Maintains a history of project development.
- Supports collaboration among multiple developers.
- Allows recovery of earlier versions.
- Helps manage parallel development.
- Reduces the risk of losing important changes.

### 2.2 Types of Version Control Systems

Version control systems are generally classified into three categories.

| Type | Description |
|---|---|
| Local VCS | Maintains version history on a local computer |
| Centralized VCS | Uses a central server to store project versions |
| Distributed VCS | Provides each user with a complete local repository and history |

Git is a distributed version control system.

## 3. Introduction to Git

Git was originally created by Linus Torvalds in 2005.

It is designed to manage changes efficiently, even in large software projects.

### 3.1 Important Features

1. Distributed architecture.
2. Local version control.
3. Commit-based project history.
4. Branching and merging.
5. Support for parallel development.
6. Collaboration through remote repositories.
7. Efficient handling of project changes.

### 3.2 Real-World Applications

Git is commonly used in:

- Software engineering: managing source code and releases.
- Team projects: combining contributions from developers.
- Research: tracking experimental code and configurations.
- Machine learning: versioning training scripts and documentation.
- Technical writing: maintaining LaTeX reports and technical manuals.

## 4. Git Architecture

Git manages project changes through local and remote repositories.

Its architecture consists of three main areas.

### 4.1 Working Directory

The working directory contains the project files that the developer is currently editing.

Changes made to these files are initially present in the working directory.

### 4.2 Staging Area

The staging area contains selected changes that are prepared for the next commit.

The `git add` command moves changes from the working directory into the staging area.

### 4.3 Local Repository

The local repository stores committed project versions and their history.

The `git commit` command records staged changes in the repository.

### 4.4 Git Workflow

The basic workflow is:

```text
Working Directory
       |
       | git add
       v
Staging Area
       |
       | git commit
       v
Local Repository
       |
       | git push / git pull
       v
Remote Repository
```

Each area has a different purpose:

| Area | Purpose |
|---|---|
| Working Directory | Edit project files |
| Staging Area | Select changes for the next commit |
| Local Repository | Store committed history |
| Remote Repository | Share project history with other users |

## 5. Installing Git

Git is available for Windows, macOS and Linux.

### 5.1 Windows

1. Visit the official Git website.
2. Download the Windows installer.
3. Run the installer.
4. Follow the installation instructions.
5. Open Git Bash or a terminal.

Official download:

https://git-scm.com/downloads

### 5.2 macOS

Git can be installed using Homebrew:

```bash
brew install git
```

### 5.3 Linux

For Debian or Ubuntu:

```bash
sudo apt-get update
sudo apt-get install git
```

### 5.4 Verifying Installation

After installation, execute:

```bash
git --version
```

This displays the installed Git version.

## 6. Configuring Git

Before creating commits, Git should be configured with the user's identity.

### 6.1 Setting Username

```bash
git config --global user.name "Your Name"
```

### 6.2 Setting Email

```bash
git config --global user.email "your@email.com"
```

The global option applies the configuration to all repositories for the current user.

### 6.3 Viewing Configuration

```bash
git config --list
```

This displays the currently configured Git settings.

### 6.4 Checking Individual Settings

```bash
git config user.name

git config user.email
```

These commands display the configured username and email.

## 7. Creating a Git Repository

A Git repository is a project directory whose history and changes are managed by Git.

### 7.1 Creating a Project Directory

```bash
mkdir calculator

cd calculator
```

The `mkdir` command creates a directory, while `cd` enters that directory.

### 7.2 Initialising Git

```bash
git init
```

This initialises a new Git repository in the current directory.

Git creates a hidden `.git` directory containing repository metadata and version history information.

### 7.3 Checking Repository Status

```bash
git status
```

This command displays the current state of the working directory and staging area.

It helps identify:

- Untracked files.
- Modified files.
- Staged changes.
- Whether the working tree is clean.

## 8. Basic Git Commands

Git provides several commands for managing files and recording changes.

### 8.1 git add

The `git add` command stages changes for the next commit.

Syntax:

```bash
git add filename
```

Example:

```bash
git add main.py
```

To stage all changes in the current directory:

```bash
git add .
```

### 8.2 git commit

The `git commit` command records staged changes in the repository.

Syntax:

```bash
git commit -m "Commit message"
```

Example:

```bash
git commit -m "Add initial calculator program"
```

A commit represents a recorded version of the project.

### 8.3 git status

Displays the current state of the repository.

```bash
git status
```

### 8.4 git log

Displays the commit history.

```bash
git log
```

A shorter version is:

```bash
git log --oneline
```

This displays commits in a compact format.

### 8.5 git diff

Displays differences between changes.

```bash
git diff
```

This is useful for reviewing modifications before staging them.

### 8.6 Basic Command Summary

| Command | Purpose |
|---|---|
| `git init` | Initialise a repository |
| `git status` | Check repository status |
| `git add` | Stage changes |
| `git commit` | Record staged changes |
| `git log` | View commit history |
| `git log --oneline` | View compact commit history |
| `git diff` | View file differences |

## 9. The Basic Git Workflow

The basic Git workflow consists of four major activities.

### Step 1: Edit Files

Create or modify project files in the working directory.

### Step 2: Stage Changes

```bash
git add .
```

This selects the changes that should be included in the next commit.

### Step 3: Commit Changes

```bash
git commit -m "Describe the changes"
```

This records the selected changes.

### Step 4: Verify the Commit

```bash
git log --oneline
```

This displays the recorded project history.

The workflow can be represented as:

```text
Edit Files
    |
    v
Stage Changes
    |
    v
Commit Changes
    |
    v
Review History
```

## 10. Complete Local Git Example

The following example demonstrates how to create a repository and record the first version of a project.

### Step 1: Create a Project

```bash
mkdir calculator

cd calculator

git init
```

### Step 2: Create a Python File

Create `main.py`:

```python
print("Calculator")

a = 10
b = 5

print("Sum:", a + b)
```

### Step 3: Check Repository Status

```bash
git status
```

Git identifies `main.py` as an untracked file.

### Step 4: Stage the File

```bash
git add main.py
```

### Step 5: Commit the File

```bash
git commit -m "Add calculator program"
```

### Step 6: View Commit History

```bash
git log --oneline
```

The repository now contains its first recorded project version.

## 11. Understanding Commits

A commit records a snapshot of the staged project changes.

Each commit contains information such as:

- Commit identifier (hash).
- Author information.
- Commit date.
- Commit message.
- References to the recorded project state.

Commits allow developers to understand how a project has evolved.

### 11.1 Writing Good Commit Messages

Commit messages should describe the purpose of a change.

Examples:

```text
Add initial calculator program

Fix input validation

Update project documentation

Add subtraction functionality
```

Clear commit messages make repository history easier to understand.

## 12. Best Practices for Git

The following practices help maintain a clean and manageable repository.

1. Commit changes frequently and logically.
2. Write clear commit messages.
3. Review changes before committing.
4. Keep commits focused on related modifications.
5. Check repository status regularly.
6. Avoid committing unnecessary generated files.
7. Maintain useful project documentation.
8. Use appropriate branches for independent development.

## 13. Conclusion

Git is an essential tool for managing changes in software and documentation projects.

Its distributed architecture, staging area, commits, and repository history provide an effective method for tracking project development.

Understanding the basic Git workflow creates a foundation for more advanced activities such as remote collaboration, branching, merging, and pull requests.

## References

1. Course lecture: Git and GitHub, Prof. Neeta Nain, Department of Computer Science and Engineering, MNIT Jaipur, October 12, 2026.
2. [Official Git Website](https://git-scm.com/)
3. [Git Documentation](https://git-scm.com/doc)
4. [Pro Git Book](https://git-scm.com/book/en/v2)

---

*End of Chapter 11*
