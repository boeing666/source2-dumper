#pragma once

class C_DOTA_Hero_Recorder : public C_BaseEntity /*0x0*/  // sizeof 0xA00, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    bool m_bStartRecording; // offset 0x5F0, size 0x1, align 1
    char _pad_05F1[0x3]; // offset 0x5F1
    CHandle< C_DOTA_BaseNPC > m_hHero; // offset 0x5F4, size 0x4, align 4
    CHandle< C_DOTAPlayerController > m_hPlayer; // offset 0x5F8, size 0x4, align 4
    bool m_bRecording; // offset 0x5FC, size 0x1, align 1
    bool m_bLastStartRecording; // offset 0x5FD, size 0x1, align 1
    char _pad_05FE[0x2]; // offset 0x5FE
    float32 m_flLastCycle; // offset 0x600, size 0x4, align 4
    int32 m_nCompletedCycles; // offset 0x604, size 0x4, align 4
    int32 m_nFramesThisCycle; // offset 0x608, size 0x4, align 4
    int32 m_nRecordedFrames; // offset 0x60C, size 0x4, align 4
    float32 m_flHeroAdvanceTime; // offset 0x610, size 0x4, align 4
    float32 m_flStartTime; // offset 0x614, size 0x4, align 4
    CUtlVector< float32 > m_flCycles; // offset 0x618, size 0x18, align 8
    CUtlVector< CUtlString* > m_pBatchFiles; // offset 0x630, size 0x18, align 8
    char _pad_0648[0x3B8]; // offset 0x648
};
