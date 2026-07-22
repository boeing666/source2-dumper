#pragma once

class CFuncShatterglass : public CBaseModelEntity /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    matrix3x4_t m_matPanelTransform; // offset 0x780, size 0x30, align 4
    matrix3x4_t m_matPanelTransformWsTemp; // offset 0x7B0, size 0x30, align 4
    CUtlVector< uint32 > m_vecShatterGlassShards; // offset 0x7E0, size 0x18, align 8
    Vector2D m_PanelSize; // offset 0x7F8, size 0x8, align 4
    GameTime_t m_flLastShatterSoundEmitTime; // offset 0x800, size 0x4, align 255
    GameTime_t m_flLastCleanupTime; // offset 0x804, size 0x4, align 255
    GameTime_t m_flInitAtTime; // offset 0x808, size 0x4, align 255
    float32 m_flGlassThickness; // offset 0x80C, size 0x4, align 4
    float32 m_flSpawnInvulnerability; // offset 0x810, size 0x4, align 4
    bool m_bBreakSilent; // offset 0x814, size 0x1, align 1
    bool m_bBreakShardless; // offset 0x815, size 0x1, align 1
    bool m_bBroken; // offset 0x816, size 0x1, align 1
    bool m_bGlassNavIgnore; // offset 0x817, size 0x1, align 1
    bool m_bGlassInFrame; // offset 0x818, size 0x1, align 1
    bool m_bStartBroken; // offset 0x819, size 0x1, align 1
    uint8 m_iInitialDamageType; // offset 0x81A, size 0x1, align 1
    char _pad_081B[0x5]; // offset 0x81B
    CUtlSymbolLarge m_szDamagePositioningEntityName01; // offset 0x820, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName02; // offset 0x828, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName03; // offset 0x830, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName04; // offset 0x838, size 0x8, align 8
    CUtlVector< Vector > m_vInitialDamagePositions; // offset 0x840, size 0x18, align 8
    CUtlVector< Vector > m_vExtraDamagePositions; // offset 0x858, size 0x18, align 8
    CUtlVector< Vector4D > m_vInitialPanelVertices; // offset 0x870, size 0x18, align 8
    CEntityIOOutput m_OnBroken; // offset 0x888, size 0x18, align 255
    uint8 m_iSurfaceType; // offset 0x8A0, size 0x1, align 1
    char _pad_08A1[0x7]; // offset 0x8A1
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageBase; // offset 0x8A8, size 0x8, align 8
};
