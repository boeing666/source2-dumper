#pragma once

class CCSPlayerModernJump  // sizeof 0x38, align 0xFF [vtable trivial_dtor] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    GameTick_t m_nLastActualJumpPressTick; // offset 0x10, size 0x4, align 255
    float32 m_flLastActualJumpPressFrac; // offset 0x14, size 0x4, align 4
    GameTick_t m_nLastUsableJumpPressTick; // offset 0x18, size 0x4, align 255
    float32 m_flLastUsableJumpPressFrac; // offset 0x1C, size 0x4, align 4
    GameTick_t m_nLastLandedTick; // offset 0x20, size 0x4, align 255
    float32 m_flLastLandedFrac; // offset 0x24, size 0x4, align 4
    float32 m_flLastLandedVelocityX; // offset 0x28, size 0x4, align 4
    float32 m_flLastLandedVelocityY; // offset 0x2C, size 0x4, align 4
    float32 m_flLastLandedVelocityZ; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
};
