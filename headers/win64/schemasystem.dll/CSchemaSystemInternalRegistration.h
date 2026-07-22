#pragma once

class CSchemaSystemInternalRegistration  // sizeof 0x180, align 0xFF (schemasystem)
{
public:
    Vector2D m_Vector2D; // offset 0x0, size 0x8, align 4
    Vector m_Vector; // offset 0x8, size 0xC, align 4
    VectorWS m_VectorWS; // offset 0x14, size 0xC, align 4
    VectorAligned m_VectorAligned; // offset 0x20, size 0x10, align 16
    Quaternion m_Quaternion; // offset 0x30, size 0x10, align 16
    QAngle m_QAngle; // offset 0x40, size 0xC, align 4
    RotationVector m_RotationVector; // offset 0x4C, size 0xC, align 4
    RadianEuler m_RadianEuler; // offset 0x58, size 0xC, align 4
    DegreeEuler m_DegreeEuler; // offset 0x64, size 0xC, align 4
    QuaternionStorage m_QuaternionStorage; // offset 0x70, size 0x10, align 4
    matrix3x4_t m_matrix3x4_t; // offset 0x80, size 0x30, align 4
    matrix3x4a_t m_matrix3x4a_t; // offset 0xB0, size 0x30, align 16
    Color m_Color; // offset 0xE0, size 0x4, align 1
    Vector4D m_Vector4D; // offset 0xE4, size 0x10, align 4
    char _pad_00F4[0xC]; // offset 0xF4
    CTransform m_CTransform; // offset 0x100, size 0x20, align 16
    KeyValues* m_pKeyValues; // offset 0x120, size 0x8, align 8
    CUtlBinaryBlock m_CUtlBinaryBlock; // offset 0x128, size 0x10, align 8
    CUtlString m_CUtlString; // offset 0x138, size 0x8, align 8
    CUtlSymbol m_CUtlSymbol; // offset 0x140, size 0x2, align 2
    char _pad_0142[0x2]; // offset 0x142
    CUtlStringToken m_stringToken; // offset 0x144, size 0x4, align 4
    CUtlStringTokenWithStorage m_stringTokenWithStorage; // offset 0x148, size 0x18, align 8
    CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // offset 0x160, size 0x8, align 4
    KeyValues3 m_KV3; // offset 0x168, size 0x10, align 8
    char _pad_0178[0x8]; // offset 0x178
};
