#pragma once

struct PingConfirmationState_t  // sizeof 0xB0, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    int32 m_nInitiatingPlayerID; // offset 0x30, size 0x4, align 4
    int32 m_PingWheelMessageID; // offset 0x34, size 0x4, align 4
    float32 m_flActiveUntilTime; // offset 0x38, size 0x4, align 4
    Vector2D m_vLocation; // offset 0x3C, size 0x8, align 4
    int32 m_nPingedEntityEntIndex; // offset 0x44, size 0x4, align 4
    int32 m_nID; // offset 0x48, size 0x4, align 4
    PingConfirmationIconType m_IconType; // offset 0x4C, size 0x4, align 4
    int32[24] m_nAgreeState; // offset 0x50, size 0x60, align 4
};
