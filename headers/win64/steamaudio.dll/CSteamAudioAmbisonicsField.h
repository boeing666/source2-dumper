#pragma once

class CSteamAudioAmbisonicsField  // sizeof 0x18, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< float32 > m_field; // offset 0x0, size 0x18, align 8
};
