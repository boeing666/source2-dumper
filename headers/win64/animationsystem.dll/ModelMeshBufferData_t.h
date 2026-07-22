#pragma once

struct ModelMeshBufferData_t  // sizeof 0x30, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    int32 m_nBlockIndex; // offset 0x0, size 0x4, align 4
    uint32 m_nElementCount; // offset 0x4, size 0x4, align 4
    uint32 m_nElementSizeInBytes; // offset 0x8, size 0x4, align 4
    bool m_bMeshoptCompressed; // offset 0xC, size 0x1, align 1
    bool m_bMeshoptIndexSequence; // offset 0xD, size 0x1, align 1
    bool m_bCompressedZSTD; // offset 0xE, size 0x1, align 1
    bool m_bCreateBufferSRV; // offset 0xF, size 0x1, align 1
    bool m_bCreateBufferUAV; // offset 0x10, size 0x1, align 1
    bool m_bCreateRawBuffer; // offset 0x11, size 0x1, align 1
    bool m_bCreatePooledBuffer; // offset 0x12, size 0x1, align 1
    uint8 m_nBufferUsage; // offset 0x13, size 0x1, align 1
    char _pad_0014[0x4]; // offset 0x14
    CUtlVector< RenderInputLayoutField_t > m_inputLayoutFields; // offset 0x18, size 0x18, align 8
};
