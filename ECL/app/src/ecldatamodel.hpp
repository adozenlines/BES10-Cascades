/****************************************************************************
 * Copyright 2012 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ****************************************************************************/

#ifndef ECL_DATAMODEL_HPP
#define ECL_DATAMODEL_HPP

#include <bb/cascades/DataModel>
#include <bb/data/JsonDataAccess>

class EclDataModel : public bb::cascades::DataModel
{
    Q_OBJECT
public:
    EclDataModel(QObject *parent = 0);

    // Required interface implementation
    virtual int childCount(const QVariantList& indexPath);
    virtual bool hasChildren(const QVariantList& indexPath);
    virtual QVariant data(const QVariantList& indexPath);
    virtual QString itemType(const QVariantList& indexPath);
    void load(const QString& filename);
    virtual ~EclDataModel() { }
private:
    QVariantList m_jsonList;
};

#endif //ECL_DATAMODEL_HPP
