set(TARGET 03_AbstractFactory)

set(SOUCES
    AbstractFactory.cpp
)

set(INCLUDES
    AbstractFactory.h
)

add_executable(${TARGET} main.cpp ${SOUCES} ${INCLUDES})

