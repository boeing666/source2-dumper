#pragma once

class CEnvSoundscapeProxy : public CEnvSoundscape /*0x0*/  // sizeof 0x530, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x528]; // offset 0x0
    CUtlSymbolLarge m_MainSoundscapeName; // offset 0x528, size 0x8, align 8
};
