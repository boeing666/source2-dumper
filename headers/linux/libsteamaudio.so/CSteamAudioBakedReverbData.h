#pragma once

class CSteamAudioBakedReverbData  // sizeof 0x228, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    int32 m_nBands; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CSteamAudioSceneData m_scene; // offset 0x8, size 0x10, align 8
    CSteamAudioProbeData m_probes; // offset 0x18, size 0x8, align 8
    CSteamAudioProbeGrid m_grid; // offset 0x20, size 0x58, align 8
    SteamAudioReverbSettings_t m_reverbSettings; // offset 0x78, size 0x14, align 4
    SteamAudioReverbClusteringSettings_t m_reverbClusteringSettings; // offset 0x8C, size 0xC, align 4
    SteamAudioReverbCompressionSettings_t m_reverbCompressionSettings; // offset 0x98, size 0x8, align 4
    CSteamAudioProbeData m_clusteredProbes; // offset 0xA0, size 0x8, align 8
    CUtlVector< int16 > m_vecClusterForProbe; // offset 0xA8, size 0x18, align 8
    CSteamAudioCompressedReverb m_compressedData; // offset 0xC0, size 0x60, align 8
    CSteamAudioCompressedReverb m_compressedClusteredData; // offset 0x120, size 0x60, align 8
    CSteamAudioMovableBakedData< CSteamAudioBakedReverbData > m_movables; // offset 0x180, size 0xA8, align 8
};
