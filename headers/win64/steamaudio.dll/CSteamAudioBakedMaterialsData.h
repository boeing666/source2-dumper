#pragma once

class CSteamAudioBakedMaterialsData  // sizeof 0x38, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    CSteamAudioProbeData m_probes; // offset 0x0, size 0x8, align 8
    CUtlVector< uint32 > m_vecMaterialTokens; // offset 0x8, size 0x18, align 8
    CUtlVector< float32 > m_vecMaterialWeights; // offset 0x20, size 0x18, align 8
};
