#include "Gamma.h"


//c-tor
Gamma::Gamma()
{
	for (int i = 0; i < NUM_SQUARES; i++) {
		m_shape[i].setPosition(100 + (SHAPE_SIZE * 10 / 2) - SHAPE_SIZE / 2, -SHAPE_SIZE/2);
	}
	m_shape[0].setOrigin(SHAPE_SIZE/2,SHAPE_SIZE/2);
	m_shape[1].setOrigin(-SHAPE_SIZE/2, SHAPE_SIZE/2);
	m_shape[2].setOrigin(SHAPE_SIZE*1.5, SHAPE_SIZE/2);
	m_shape[3].setOrigin(SHAPE_SIZE*1.5, SHAPE_SIZE*1.5);
}

//d-tor
Gamma::~Gamma()
{
}
