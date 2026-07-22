#pragma once

class CCSPlayer_RadioServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x68, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    GameTime_t m_flGotHostageTalkTimer; // offset 0x48, size 0x4, align 255
    GameTime_t m_flDefusingTalkTimer; // offset 0x4C, size 0x4, align 255
    GameTime_t m_flC4PlantTalkTimer; // offset 0x50, size 0x4, align 255
    GameTime_t[3] m_flRadioTokenSlots; // offset 0x54, size 0xC, align 4
    bool m_bIgnoreRadio; // offset 0x60, size 0x1, align 1
    char _pad_0061[0x7]; // offset 0x61
};
