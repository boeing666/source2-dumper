#pragma once

class CTankTrainAI : public CPointEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CHandle< CFuncTrackTrain > m_hTrain; // offset 0x4A8, size 0x4, align 4
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x4AC, size 0x4, align 4
    int32 m_soundPlaying; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x14]; // offset 0x4B4
    CUtlSymbolLarge m_startSoundName; // offset 0x4C8, size 0x8, align 8
    CUtlSymbolLarge m_engineSoundName; // offset 0x4D0, size 0x8, align 8
    CUtlSymbolLarge m_movementSoundName; // offset 0x4D8, size 0x8, align 8
    CUtlSymbolLarge m_targetEntityName; // offset 0x4E0, size 0x8, align 8
};
