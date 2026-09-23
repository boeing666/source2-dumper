#pragma once

class CFuncShatterglass : public CBaseModelEntity /*0x0*/  // sizeof 0xC60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    matrix3x4_t m_matPanelTransform; // offset 0xB2C, size 0x30, align 4
    matrix3x4_t m_matPanelTransformWsTemp; // offset 0xB5C, size 0x30, align 4
    char _pad_0B8C[0x4]; // offset 0xB8C
    CUtlVector< uint32 > m_vecShatterGlassShards; // offset 0xB90, size 0x18, align 8
    Vector2D m_PanelSize; // offset 0xBA8, size 0x8, align 4
    GameTime_t m_flLastShatterSoundEmitTime; // offset 0xBB0, size 0x4, align 255
    GameTime_t m_flLastCleanupTime; // offset 0xBB4, size 0x4, align 255
    GameTime_t m_flInitAtTime; // offset 0xBB8, size 0x4, align 255
    float32 m_flGlassThickness; // offset 0xBBC, size 0x4, align 4
    float32 m_flSpawnInvulnerability; // offset 0xBC0, size 0x4, align 4
    bool m_bBreakSilent; // offset 0xBC4, size 0x1, align 1
    bool m_bBreakShardless; // offset 0xBC5, size 0x1, align 1
    bool m_bBroken; // offset 0xBC6, size 0x1, align 1
    bool m_bGlassNavIgnore; // offset 0xBC7, size 0x1, align 1
    bool m_bGlassInFrame; // offset 0xBC8, size 0x1, align 1
    bool m_bStartBroken; // offset 0xBC9, size 0x1, align 1
    uint8 m_iInitialDamageType; // offset 0xBCA, size 0x1, align 1
    char _pad_0BCB[0x5]; // offset 0xBCB
    CUtlSymbolLarge m_szDamagePositioningEntityName01; // offset 0xBD0, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName02; // offset 0xBD8, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName03; // offset 0xBE0, size 0x8, align 8
    CUtlSymbolLarge m_szDamagePositioningEntityName04; // offset 0xBE8, size 0x8, align 8
    CUtlVector< VectorWS > m_vInitialDamagePositions; // offset 0xBF0, size 0x18, align 8
    CUtlVector< VectorWS > m_vExtraDamagePositions; // offset 0xC08, size 0x18, align 8
    CUtlVector< Vector4D > m_vInitialPanelVertices; // offset 0xC20, size 0x18, align 8
    CEntityIOOutput m_OnBroken; // offset 0xC38, size 0x18, align 255
    uint8 m_iSurfaceType; // offset 0xC50, size 0x1, align 1
    char _pad_0C51[0x7]; // offset 0xC51
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageBase; // offset 0xC58, size 0x8, align 8
};
