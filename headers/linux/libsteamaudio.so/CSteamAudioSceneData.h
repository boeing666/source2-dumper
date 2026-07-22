#pragma once

class CSteamAudioSceneData  // sizeof 0x10, align 0x8 (steamaudio) {MGetKV3ClassDefaults}
{
public:
    IPLScene m_pScene; // offset 0x0, size 0x8, align 8
    IPLStaticMesh m_pStaticMesh; // offset 0x8, size 0x8, align 8
};
