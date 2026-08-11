#pragma once

class CEnvSoundscapeProxy : public CEnvSoundscape /*0x0*/  // sizeof 0x538, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x530]; // offset 0x0
    CUtlSymbolLarge m_MainSoundscapeName; // offset 0x530, size 0x8, align 8
};
