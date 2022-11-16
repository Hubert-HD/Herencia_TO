| petList cat dog |
petList := Array new: 2.
cat := Cat new.
dog := Dog new.
petList at: 1 put: cat.
petList at: 2 put: dog.
petList do:[:each | Transcript show: each animalSound ; cr]