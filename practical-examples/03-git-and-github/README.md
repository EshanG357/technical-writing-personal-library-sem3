# Git and GitHub Workflow Example

Practise a feature-branch workflow in a disposable local repository.

## Commands

```bash
mkdir git-workflow-demo
cd git-workflow-demo
git init
```

Create a file named `README.md`, then:

```bash
git add README.md
git commit -m "Add initial project"
git switch -c feature-update
```

Edit the README and commit the change:

```bash
git add README.md
git commit -m "Update project description"
```

Return to the main branch and merge:

```bash
git switch main
git merge feature-update
git log --oneline --graph --all
```

## Publish to GitHub (optional)

Create an empty repository on GitHub, then connect and push:

```bash
git remote add origin REPOSITORY_URL
git push -u origin main
```

Replace `REPOSITORY_URL` with your repository URL. To practise Pull Requests, push the feature branch before merging it through GitHub.

## SVN comparison

SVN is a centralised version control system. Basic commands include:

```bash
svn checkout REPOSITORY_URL
svn status
svn add filename
svn commit -m "Describe the change"
svn update
```

Use an SVN repository/server to run these commands; the commands above are a reference and are not executed by Git.
