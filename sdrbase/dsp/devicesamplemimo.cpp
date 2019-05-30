///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2019 F4EXB                                                      //
// written by Edouard Griffiths                                                  //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#include <QDebug>

#include "devicesamplemimo.h"

DeviceSampleMIMO::DeviceSampleMIMO() :
    m_guiMessageQueue(0)
{
	connect(&m_inputMessageQueue, SIGNAL(messageEnqueued()), this, SLOT(handleInputMessages()));
}

DeviceSampleMIMO::~DeviceSampleMIMO()
{
}

void DeviceSampleMIMO::handleInputMessages()
{
	Message* message;

	while ((message = m_inputMessageQueue.pop()) != 0)
	{
		if (handleMessage(*message))
		{
			delete message;
		}
	}
}

SampleSourceFifo* DeviceSampleMIMO::getSampleSourceFifo(unsigned int index)
{
    if (index >= m_sampleSourceFifos.size()) {
        return nullptr;
    } else {
        return &m_sampleSourceFifos[index];
    }
}

SampleSinkFifo* DeviceSampleMIMO::getSampleSinkFifo(unsigned int index)
{
    if (index >= m_sampleSinkFifos.size()) {
        return nullptr;
    } else {
        return &m_sampleSinkFifos[index];
    }
}