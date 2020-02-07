//#include "gh/component/CircleCNR.h"
//#include "gh/CompHelper.h"
//#include "gh/ParamImpl.h"
//
//namespace gh
//{
//namespace comp
//{
//
//void CircleCNR::Execute()
//{
//    auto a = CompHelper::GetInputParam(*this, static_cast<size_t>(InputID::A));
//    auto b = CompHelper::GetInputParam(*this, static_cast<size_t>(InputID::B));
//    if (a && b)
//    {
//        assert(a->Type() == ParamType::Point
//            && b->Type() == ParamType::Point);
//        auto& a_pts = std::static_pointer_cast<PointParam>(a)->GetPoints();
//        auto& b_pts = std::static_pointer_cast<PointParam>(b)->GetPoints();
//        m_vals[static_cast<size_t>(OutputID::L)] = BuildLineParam(a_pts, b_pts);
//    }
//    else
//    {
//        m_vals[static_cast<size_t>(OutputID::L)] = BuildLineParam(m_pts0, m_pts1);
//    }
//}
//
//ParamPtr CircleCNR::BuildCircleParam(const std::vector<sm::vec3>& centers,
//                                     const std::vector<sm::vec3>& normals,
//                                     const std::vector<float>& radius)
//{
//
//}
//
//}
//}