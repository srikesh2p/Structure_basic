# Structure_basic
Structure in C 


cd ~/icecream

Next, initialize Git so you can start using Git commands inside the folder. The folder is now a Git repository.

git init

Wait, this is the right folder, right? Here’s how you check and make sure this is where you stored your design:

git status

And this is what Git will tell you in reply:

# Untracked files:
#   (use "git add ..." to include in what will be committed)
#
#       chocolate.jpeg

There they are! Add them to your local Git repository so they’ll be tracked by Git.

git add chocolate.jpeg

Now, take a “snapshot” of the repository as it stands now with the commit command:

git commit -m “Add chocolate.jpeg.”

Great! But your co-workers, hard at work in their own local repositories, can’t see your fantastic new design. That’s because the main project is stored in the company GitHub account (username: 123WebDesign) in the repository called “icecream.”

Since you haven’t connected to the GitHub repo yet, your computer doesn’t even know this exists. So tell your local repository about it:

git remote add origin https://github.com/123WebDesign/icecream.git

And double check to make sure it knows:

git remote -v

Finally, it’s the moment you’ve been waiting for. Upload that delicious looking sundae up to the project:

git push

Ta da! With all of these tool at hand, it’s clear that Git and the GitHub service aren’t just for programmers.

git pull
git push origin master
git pull` origin master
