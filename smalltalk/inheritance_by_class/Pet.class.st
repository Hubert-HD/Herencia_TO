Class {
	#name : #Pet,
	#superclass : #Object,
	#instVars : [
		'name'
	],
	#category : #Inheritance
}

{ #category : #actions }
Pet >> animalSound [
	^'The animal makes a sound'
]

{ #category : #accessing }
Pet >> name [
	^name
]

{ #category : #accessing }
Pet >> name: anString [
	name := anString
]
