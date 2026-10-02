#pragma once

class C_NPC_TrooperBoss : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1B90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B60]; // offset 0x0
    CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // offset 0x1B60, size 0x20, align 255
    int32 m_iLane; // offset 0x1B80, size 0x4, align 4 | MNotSaved
    GameTime_t m_flFadeOutStart; // offset 0x1B84, size 0x4, align 255 | MNotSaved
    GameTime_t m_flFadeOutEnd; // offset 0x1B88, size 0x4, align 255 | MNotSaved
    char _pad_1B8C[0x4]; // offset 0x1B8C
};
