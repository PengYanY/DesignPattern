set(TARGET 05_Builder)

set(SOUCES
    Builder.cpp
)

set(INCLUDES
    Builder.h
)

add_executable(${TARGET} main.cpp ${SOUCES} ${INCLUDES})

