#ifndef SDL_INPUT_BACKEND_HPP
#define SDL_INPUT_BACKEND_HPP

#include "pemsa/input/pemsa_input_backend.hpp"
#include "pemsa/input/pemsa_input_module.hpp"
#include "SDL2/SDL.h"

class SdlInputBackend : public PemsaInputBackend {
	public:
		void handleEvent(SDL_Event* event);
		bool isButtonDown(int i, int p) override;
		bool isButtonPressed(int i, int p) override;
		void update() override;
	private:
		uint8_t state[PEMSA_PLAYER_COUNT][PEMSA_BUTTON_COUNT];
};

#endif