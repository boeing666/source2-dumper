#pragma once

class CSteamAudioCompressedReverb  // sizeof 0x60, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    int32 m_nChannels; // offset 0x0, size 0x4, align 4
    int32 m_nBands; // offset 0x4, size 0x4, align 4
    int32 m_nBins; // offset 0x8, size 0x4, align 4
    int32 m_nProbes; // offset 0xC, size 0x4, align 4
    CUtlVector< int32 > m_vecNumSingularValues; // offset 0x10, size 0x18, align 8
    CUtlVector< float32 > m_vecDictionary; // offset 0x28, size 0x18, align 8
    CUtlVector< float32 > m_vecCompressedData; // offset 0x40, size 0x18, align 8
    IPLCompressedEnergyFields m_pCompressedData; // offset 0x58, size 0x8, align 8
};
