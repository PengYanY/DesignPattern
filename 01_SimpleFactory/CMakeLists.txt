set(TARGET 01_SimpleFactory)

set(SOUCES
    SimpleFactory.cpp
)

set(INCLUDES
    SimpleFactory.h
)

add_executable(${TARGET} main.cpp ${SOUCES} ${INCLUDES})


