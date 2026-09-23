#pragma once

class CTriggerPush : public CBaseTrigger /*0x0*/  // sizeof 0xCD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC9C]; // offset 0x0
    QAngle m_angPushEntitySpace; // offset 0xC9C, size 0xC, align 4
    Vector m_vecPushDirEntitySpace; // offset 0xCA8, size 0xC, align 4
    bool m_bTriggerOnStartTouch; // offset 0xCB4, size 0x1, align 1
    bool m_bUsePathSimple; // offset 0xCB5, size 0x1, align 1
    char _pad_0CB6[0x2]; // offset 0xCB6
    CUtlSymbolLarge m_iszPathSimpleName; // offset 0xCB8, size 0x8, align 8
    CHandle< CPathSimple > m_PathSimple; // offset 0xCC0, size 0x4, align 4
    uint32 m_splinePushType; // offset 0xCC4, size 0x4, align 4
    float32 m_flSpeed; // offset 0xCC8, size 0x4, align 4
    char _pad_0CCC[0x4]; // offset 0xCCC
};
