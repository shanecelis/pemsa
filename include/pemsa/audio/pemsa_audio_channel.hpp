#ifndef PEMSA_AUDIO_CHANNEL_HPP
#define PEMSA_AUDIO_CHANNEL_HPP

#include "pemsa/pemsa_predefines.hpp"
#include <cstdint>

class PemsaChannelInfo {
	public:
		PemsaChannelInfo();

		bool active;

		int sfx;
		int lastStep;

		double offset;
		double waveOffset;
		double frequency;

		uint8_t speed;
		uint8_t instrument;
		uint8_t volume;
		uint8_t fx;

		int note;
		int lastNote;
		bool isCustom;
};

class PemsaAudioChannel {
	public:
		PemsaAudioChannel(PemsaEmulator* emulator);

		void play(int sfx);
		double sample();
		bool isActive();
		void stop();

		int getSfx();
		int getNote();
	private:
		PemsaEmulator* emulator;
		PemsaChannelInfo infos[2];

		double prepareSample(int id);
		double sampleAt(int id);

		double applyFx(int id, int fx);
};

#endif