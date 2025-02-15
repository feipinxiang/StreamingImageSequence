
#include "stdafx.h"
#include "CommonLib/CriticalSectionObject.h"

#include "CommonLib/CriticalSection.h"

namespace StreamingImageSequencePlugin {

CriticalSection& CriticalSection::GetInstance( ) {
    static CriticalSection cs;
    return cs;
}

//----------------------------------------------------------------------------------------------------------------------

CriticalSection::~CriticalSection( ) {
    
}

//----------------------------------------------------------------------------------------------------------------------

CriticalSectionObject* CriticalSection::GetObject(const CriticalSectionType csType) {
    return &m_objects[csType];
}

//----------------------------------------------------------------------------------------------------------------------

CriticalSection::CriticalSection() {
    
}


} //end namespace
