#pragma once

class CBot  // sizeof 0xF8, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CCSPlayerController* m_pController; // offset 0x10, size 0x8, align 8
    CCSPlayerPawn* m_pPlayer; // offset 0x18, size 0x8, align 8
    bool m_bHasSpawned; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x3]; // offset 0x21
    uint32 m_id; // offset 0x24, size 0x4, align 4
    char _pad_0028[0x90]; // offset 0x28
    bool m_isRunning; // offset 0xB8, size 0x1, align 1
    bool m_isCrouching; // offset 0xB9, size 0x1, align 1
    char _pad_00BA[0x2]; // offset 0xBA
    float32 m_forwardSpeed; // offset 0xBC, size 0x4, align 4
    float32 m_leftSpeed; // offset 0xC0, size 0x4, align 4
    float32 m_verticalSpeed; // offset 0xC4, size 0x4, align 4
    uint64 m_buttonFlags; // offset 0xC8, size 0x8, align 8
    float32 m_jumpTimestamp; // offset 0xD0, size 0x4, align 4
    Vector m_viewForward; // offset 0xD4, size 0xC, align 4
    char _pad_00E0[0x10]; // offset 0xE0
    int32 m_postureStackIndex; // offset 0xF0, size 0x4, align 4
    char _pad_00F4[0x4]; // offset 0xF4
};
