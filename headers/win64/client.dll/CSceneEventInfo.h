#pragma once

class CSceneEventInfo  // sizeof 0x80, align 0xFF (client)
{
public:
    int32 m_iLayer; // offset 0x0, size 0x4, align 4
    int32 m_iPriority; // offset 0x4, size 0x4, align 4
    HSequence m_hSequence; // offset 0x8, size 0x4, align 255
    float32 m_flWeight; // offset 0xC, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCNmClip > m_hAnimClip; // offset 0x10, size 0x8, align 8
    CGlobalSymbol m_sAnimClipSlot; // offset 0x18, size 0x8, align 8
    CGlobalSymbol m_sAnimClipSlotWeight; // offset 0x20, size 0x8, align 8
    bool m_bHasArrived; // offset 0x28, size 0x1, align 1
    char _pad_0029[0x3]; // offset 0x29
    int32 m_nType; // offset 0x2C, size 0x4, align 4
    GameTime_t m_flNext; // offset 0x30, size 0x4, align 255
    bool m_bIsGesture; // offset 0x34, size 0x1, align 1
    bool m_bShouldRemove; // offset 0x35, size 0x1, align 1
    char _pad_0036[0x26]; // offset 0x36
    CHandle< C_BaseEntity > m_hTarget; // offset 0x5C, size 0x4, align 4
    CModifierHandleTyped< CCitadelModifier > m_hModifier; // offset 0x60, size 0x18, align 8
    SceneEventId_t m_nSceneEventId; // offset 0x78, size 0x4, align 255
    bool m_bClientSide; // offset 0x7C, size 0x1, align 1
    bool m_bStarted; // offset 0x7D, size 0x1, align 1
    char _pad_007E[0x2]; // offset 0x7E
};
