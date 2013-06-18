#indique la version mimimun pour utiliser UseLaTeX
cmake_minimum_required(VERSION 2.8)
#Indique le chemin de compilation
set(LATEX_OUTPUT_PATH "./Build")
#Type de projet
PROJECT(MyDoc NONE)

#Appelle à UseLATEX
INCLUDE(UseLATEX.cmake)
ADD_LATEX_DOCUMENT(Document.tex
INPUTS Chapter/Chapter1.tex Chapter/Chapter2.tex glossaire.tex
IMAGE_DIRS images
BIBFILES biblio.bib
USE_GLOSSARY
DEFAULT_PDF)