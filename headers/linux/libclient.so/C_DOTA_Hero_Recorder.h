#pragma once

class C_DOTA_Hero_Recorder : public C_BaseEntity /*0x0*/  // sizeof 0xB80, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    bool m_bStartRecording; // offset 0x76C, size 0x1, align 1
    char _pad_076D[0x3]; // offset 0x76D
    CHandle< C_DOTA_BaseNPC > m_hHero; // offset 0x770, size 0x4, align 4
    CHandle< C_DOTAPlayerController > m_hPlayer; // offset 0x774, size 0x4, align 4
    bool m_bRecording; // offset 0x778, size 0x1, align 1
    bool m_bLastStartRecording; // offset 0x779, size 0x1, align 1
    char _pad_077A[0x2]; // offset 0x77A
    float32 m_flLastCycle; // offset 0x77C, size 0x4, align 4
    int32 m_nCompletedCycles; // offset 0x780, size 0x4, align 4
    int32 m_nFramesThisCycle; // offset 0x784, size 0x4, align 4
    int32 m_nRecordedFrames; // offset 0x788, size 0x4, align 4
    float32 m_flHeroAdvanceTime; // offset 0x78C, size 0x4, align 4
    float32 m_flStartTime; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    CUtlVector< float32 > m_flCycles; // offset 0x798, size 0x18, align 8
    CUtlVector< CUtlString* > m_pBatchFiles; // offset 0x7B0, size 0x18, align 8
    char _pad_07C8[0x3B8]; // offset 0x7C8
};
