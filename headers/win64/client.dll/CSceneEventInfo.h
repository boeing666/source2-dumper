#pragma once

class CSceneEventInfo  // sizeof 0x78, align 0xFF (client)
{
public:
    int32 m_iLayer; // offset 0x0, size 0x4, align 4
    int32 m_iPriority; // offset 0x4, size 0x4, align 4
    HSequence m_hSequence; // offset 0x8, size 0x4, align 255
    float32 m_flWeight; // offset 0xC, size 0x4, align 4
    float32 m_flLastAccumulatedTime; // offset 0x10, size 0x4, align 4
    float32 m_flLastJumpFromTime; // offset 0x14, size 0x4, align 4
    float32 m_flLastJumpToTime; // offset 0x18, size 0x4, align 4
    float32 m_flLastCycle; // offset 0x1C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCNmClip > m_hAnimClip; // offset 0x20, size 0x8, align 8
    CGlobalSymbol m_sAnimClipSlot; // offset 0x28, size 0x8, align 8
    CGlobalSymbol m_sAnimClipSlotWeight; // offset 0x30, size 0x8, align 8
    bool m_bHasArrived; // offset 0x38, size 0x1, align 1
    char _pad_0039[0x3]; // offset 0x39
    int32 m_nType; // offset 0x3C, size 0x4, align 4
    GameTime_t m_flNext; // offset 0x40, size 0x4, align 255
    bool m_bIsGesture; // offset 0x44, size 0x1, align 1
    bool m_bShouldRemove; // offset 0x45, size 0x1, align 1
    char _pad_0046[0x26]; // offset 0x46
    CHandle< C_BaseEntity > m_hTarget; // offset 0x6C, size 0x4, align 4
    SceneEventId_t m_nSceneEventId; // offset 0x70, size 0x4, align 255
    bool m_bClientSide; // offset 0x74, size 0x1, align 1
    bool m_bStarted; // offset 0x75, size 0x1, align 1
    char _pad_0076[0x2]; // offset 0x76
};
