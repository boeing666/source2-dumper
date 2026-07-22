#pragma once

class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup /*0x0*/  // sizeof 0xA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    bool m_bAllowMultipleScenes; // offset 0xA0, size 0x1, align 1
    char _pad_00A1[0x7]; // offset 0xA1
};
