SOURCES	+= GLView.cpp \
	main.cpp
HEADERS	+= GLView.h
unix {
  UI_DIR = .ui
  MOC_DIR = .moc
  OBJECTS_DIR = .obj
}
FORMS	= matleditor.ui
IMAGES	= res/blackpl.png \
	res/blackru.png \
	res/brass.png \
	res/bronze.png \
	res/chrome.png \
	res/copper.png \
	res/cyanpl.png \
	res/cyanru.png \
	res/emerald.png \
	res/gold.png \
	res/greenpl.png \
	res/greenru.png \
	res/jade.png \
	res/logo.png \
	res/obsidian.png \
	res/pearl.png \
	res/redpl.png \
	res/redru.png \
	res/ruby.png \
	res/silver.png \
	res/turquoise.png \
	res/whitepl.png \
	res/whiteru.png \
	res/yellowpl.png \
	res/yellowru.png
TEMPLATE	=app
CONFIG	+= qt warn_on debug opengl
LIBS	+= -lglut
LANGUAGE	= C++
