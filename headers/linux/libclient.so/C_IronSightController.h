#pragma once

class C_IronSightController  // sizeof 0xB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    bool m_bIronSightAvailable; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    float32 m_flIronSightAmount; // offset 0x14, size 0x4, align 4
    float32 m_flIronSightAmountGained; // offset 0x18, size 0x4, align 4
    float32 m_flIronSightAmountBiased; // offset 0x1C, size 0x4, align 4
    float32 m_flIronSightAmount_Interpolated; // offset 0x20, size 0x4, align 4
    float32 m_flIronSightAmountGained_Interpolated; // offset 0x24, size 0x4, align 4
    float32 m_flIronSightAmountBiased_Interpolated; // offset 0x28, size 0x4, align 4
    float32 m_flInterpolationLastUpdated; // offset 0x2C, size 0x4, align 4
    QAngle[8] m_angDeltaAverage; // offset 0x30, size 0x60, align 4
    QAngle m_angViewLast; // offset 0x90, size 0xC, align 4
    Vector2D m_vecDotCoords; // offset 0x9C, size 0x8, align 4
    float32 m_flFiringInaccuracyExtraWidthMultiplier; // offset 0xA4, size 0x4, align 4
    float32 m_flSpeedRatio; // offset 0xA8, size 0x4, align 4
    char _pad_00AC[0x4]; // offset 0xAC
};
