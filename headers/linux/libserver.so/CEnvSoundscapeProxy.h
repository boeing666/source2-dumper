#pragma once

class CEnvSoundscapeProxy : public CEnvSoundscape /*0x0*/  // sizeof 0x810, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x808]; // offset 0x0
    CUtlSymbolLarge m_MainSoundscapeName; // offset 0x808, size 0x8, align 8
};
