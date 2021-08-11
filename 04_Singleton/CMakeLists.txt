set(TARGET 04_Singleton)

set(SOUCES
    Singleton.cpp
)

set(INCLUDES
    Singleton.h
)

add_executable(${TARGET} main.cpp ${SOUCES} ${INCLUDES})

