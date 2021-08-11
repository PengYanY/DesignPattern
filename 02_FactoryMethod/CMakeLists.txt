set(TARGET 02_FactoryMethod)

set(SOUCES
    FactoryMethod.cpp
)

set(INCLUDES
    FactoryMethod.h
)

add_executable(${TARGET} main.cpp ${SOUCES} ${INCLUDES})

