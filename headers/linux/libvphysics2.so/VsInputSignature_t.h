#pragma once

struct VsInputSignature_t  // sizeof 0x30, align 0xFF (modellib)
{
    CUtlVector< VsInputSignatureElement_t > m_elems; // offset 0x0, size 0x18, align 8
    CUtlVector< VsInputSignatureElement_t > m_depth_elems; // offset 0x18, size 0x18, align 8
};
