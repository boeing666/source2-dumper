#pragma once

class CTankTrainAI : public CPointEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CHandle< CFuncTrackTrain > m_hTrain; // offset 0x788, size 0x4, align 4
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x78C, size 0x4, align 4
    int32 m_soundPlaying; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x14]; // offset 0x794
    CUtlSymbolLarge m_startSoundName; // offset 0x7A8, size 0x8, align 8
    CUtlSymbolLarge m_engineSoundName; // offset 0x7B0, size 0x8, align 8
    CUtlSymbolLarge m_movementSoundName; // offset 0x7B8, size 0x8, align 8
    CUtlSymbolLarge m_targetEntityName; // offset 0x7C0, size 0x8, align 8
};
