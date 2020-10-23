#ifndef PEMSA_AUDIO_BACKEND_HPP
#define PEMSA_AUDIO_BACKEND_HPP

#include "pemsa/pemsa_backend.hpp"

class PemsaAudioBackend : public PemsaBackend {
	public:
		virtual void update() = 0;
};

#endif